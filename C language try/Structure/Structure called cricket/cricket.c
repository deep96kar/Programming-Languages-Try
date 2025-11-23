#include <stdio.h>
#include <conio.h>
#include <string.h>

struct cricket
{
    char name[25];
    char tname[25];
    float avg;
};

int main()
{
    struct cricket p[3];
    int i, j = 0, cnt = 0, flag;
    char t[10][25];

    // clrscr();

    for (i = 0; i < 3; i++)
    {
        while ((getchar()) != '\n');
        printf("\nENTER PLAYER NAME : ");
        gets(p[i].name);
        strupr(p[i].name);

        printf("\nENTER TEAM NAME : ");
        gets(p[i].tname);
        strupr(p[i].tname);

        printf("\nENTER BATTING AVERAGE : ");
        scanf("%f", &p[i].avg);

        flag = 0;

        for (j = 0; j < cnt; j++)
        {
            if (strcmp(p[i].tname, t[j]) == 0)
            {
                flag = 1;
            }
        }

        if (flag == 0)
        {
            strcpy(t[cnt], p[i].tname);
            cnt++;
        }
    }

    // clrscr();

    printf("\n\n\t\t==================");
    printf("\n\n\t\tTEAM WISE REPORT");
    printf("\n\n\t\t==================");
    printf("\n\n\tTEAM NAME\tPLAYER NAME\tBATTING AVERAGE");
    printf("\n\n\t--------------------------------------------------");

    for (i = 0; i < cnt; i++)
    {
        printf("\n\n\t%s", t[i]);
        for (j = 0; j < 3; j++)
        {
            if (strcmp(t[i], p[j].tname) == 0)
            {
                printf("\n\t\t\t%-11s\t%11.0f", p[j].name, p[j].avg);
            }
        }
    }

    // getch();
}
