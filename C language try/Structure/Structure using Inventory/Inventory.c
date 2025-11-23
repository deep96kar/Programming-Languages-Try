#include <stdio.h>
#include <conio.h>
#include <math.h>

struct inven
{
    int ino;
    char des[20];
    int pst;
    float sc;
    float uc;
    float irt;
    float usg;
    float aus;
    float ltm;
    float rpt;
    float rqt;
};
void main()
{
    struct inven item[3];
    int i, cnt;

    for (i = 0; i < 3; i++)
    {
        printf("\n\n=========================\n");
        printf("\n\tPRODUCT DETAIL\n");
        printf("\n=========================\n");

        printf("\nENTER ITEM NUMBER: ");
        scanf("%d", &item[i].ino);

        printf("\nENTER ITEM NAME: ");
        fflush(stdin);
        gets(item[i].des);

        printf("\nENTER QUANTITY ON HAND: ");
        scanf("%d", &item[i].pst);

        printf("\nENTER SETUP COST: ");
        scanf("%f", &item[i].sc);

        printf("\nENTER UNIT COST: ");
        scanf("%f", &item[i].uc);

        printf("\nENTER INTEREST RATE:");
        scanf("%f", &item[i].irt);

        printf("\nENTER WEEKLY USAGE: ");
        scanf("%f", &item[i].usg);

        printf("\nENTER LEAD TIME: ");
        scanf("%f", &item[i].ltm);

        item[i].aus = item[i].usg * 52;
        item[i].rpt = item[i].ltm * item[i].usg;
        item[i].rqt = sqrt((2 * item[i].aus * item[i].sc) / (item[i].uc * item[i].irt));
    }

    printf("\n\n=========================");
    printf("\nINVENTORY REPORT\n");
    printf("\n\n=========================");

    printf("\n\n ITEM NUMBER\tDESCRIPTION\tQTY ON HAND\tREORDER POINT\tREORDER QTY");
    printf("\n---------------------------------------------------------------------\n\n");

    cnt = 0;
    for (i = 0; i < 3; i++)
    {
        if (item[i].pst < item[i].rpt)
        {
            fflush(stdin);
            printf("\n%d\t\t%s\t\t%d\t\t%.2f\t\t%.2f",
                    item[i].ino, item[i].des, item[i].pst, item[i].rpt,
                    item[i].rqt);
            cnt++;
        }
    }

    if (cnt == 0)
    {
        printf("\n\t\t\tNO DATA AVAILABLE FOR THIS REPORT");
    }
}
