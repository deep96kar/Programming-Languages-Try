#include <stdio.h>
#include <conio.h>
#include <string.h>

struct stud
{
    char name[20];
    int q1;
    int q2;
    int mid;
    int final;
    float tot;
    char grd;
};

void main()
{
    struct stud s[3], tmp;
    int i, j;

    for (i = 0; i < 3; i++)
    {
        printf("\n===============================\n");
        printf("\nENTER DETAIL OF STUDENT %d\n", i + 1);
        printf("\n===============================\n");
        printf("\nENTER NAME      : ");
        scanf("%s", s[i].name);
        printf("\nENTER MARKS OF QUIZ 1 : ");
        scanf("%d", &s[i].q1);
        printf("\nENTER MARKS OF QUIZ 2 : ");
        scanf("%d", &s[i].q2);
        printf("\nENTER MARKS OF MID    : ");
        scanf("%d", &s[i].mid);
        printf("\nENTER MARKS OF FINAL  : ");
        scanf("%d", &s[i].final);

        s[i].tot = (0.15 * (s[i].q1 + s[i].q2)) + (0.3 * (s[i].mid)) + (0.4 * (s[i].final));

        if (s[i].tot >= 0.0 && s[i].tot < 39.0)
        {
            s[i].grd = 'F';
        }
        if (s[i].tot >= 39.0 && s[i].tot <= 54.0)
        {
            s[i].grd = 'D';
        }
        if (s[i].tot > 54.0 && s[i].tot < 79.0)
        {
            s[i].grd = 'C';
        }
        if (s[i].tot > 79.0 && s[i].tot <= 89.0)
        {
            s[i].grd = 'B';
        }
        if (s[i].tot > 89.0 && s[i].tot <= 100.0)
        {
            s[i].grd = 'A';
        }
    }

    for (i = 0; i < 2; i++)
    {
        for (j = i + 1; j < 2; j++)
        {
            if (strcmp(s[i].name, s[j].name) > 0)
            {
                tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
    }

    printf("\n\n\t\t=================================");
    printf("\n\t\t\t STUDENT DETAIL");
    printf("\n\t\t=================================\n\n");
    printf("\n\t==============================================\n");
    printf("\n\tNAME\tTERM\tEXAM\tSCORE\t");
    printf("\n\tSTUDENT\tQUIZ 1\tQUIZ 2\tMID\tFINAL\tTOTAL\tGRADE");
    printf("\n\t==============================================\n");

    for (i = 0; i < 3; i++)
    {
        printf("\n\t%-10s %-2d\t%-2d\t%-2d\t%-2d\t%.2f\t%c",
               s[i].name, s[i].q1, s[i].q2, s[i].mid, s[i].final, s[i].tot, s[i].grd);
    }
}
