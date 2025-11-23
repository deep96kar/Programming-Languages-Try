#include <stdio.h>
#include <conio.h>
int main()
{
    int r = 0, m1 = 0, m2 = 0, m3 = 0, m4 = 0, m5 = 0, m6 = 0, t = 0;
    char nm[20], s1[20], s2[20], s3[20], s4[20], s5[20], s6[20];
    char name[30];
    int roll[10];
    printf("\n name:- ");
    scanf("%s", &name);
    printf("\n roll:- ");
    scanf("%s", &roll);
    printf("\n subject:- ");
    scanf("%s", s1);
    printf("\n marks:- ");
    scanf("%d", &m1);
    printf("\n subject:- ");
    scanf("%s", s2);
    printf("\n marks:- ");
    scanf("%d", &m2);
    printf("\n subject:- ");
    scanf("%s", s3);
    printf("\n marks:- ");
    scanf("%d", &m3);
    printf("\n subject:- ");
    scanf("%s", s4);
    printf("\n marks:- ");
    scanf("%d", &m4);
    printf("\n subject:- ");
    scanf("%s", s5);
    printf("\n marks:- ");
    scanf("%d", &m5);
    t = m1 + m2 + m3 + m4 + m5;
    printf("\t\tmarksheet");
    printf("\n \t\t__________");
    printf("\n");
    printf("\n    Name\tRoll");
    printf("\n __________  __________");
    printf("\n %s \t \t %s", name,roll);
    printf("\n");
    printf("\n subject\tmarks");
    printf("\n __________  __________");
    printf("\n %s \t \t %d", s1, m1);
    printf("\n %s \t \t %d", s2, m2);
    printf("\n %s \t \t %d", s3, m3);
    printf("\n %s \t \t %d", s4, m4);
    printf("\n %s \t \t %d", s5, m5);
    printf("\n ______________________");
    printf("\n total:-\t%d", t);
    printf("\n");
    if (t > 160)
    {
        printf("\n pass/fail:-\tpass");
    }
    else
    {
        printf("\n pass/fail:-\tfail");
        return 0;
    }

    if (t > 450 && t < 600)
    {
        printf(" grade A+");
        return 0;
    }
};
