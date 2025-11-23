#include <stdio.h>

/* Function Declaration */
double add(double, double);
double sub(double, double);
double mul(double, double);
double div(double, double);
long int fact(int);
double sqr(double);

int main()
{
    double op1, op2, ans;
    char ch;
    int fno;
    long int cho, f;

    do
    {
        // printf("\n\n\n\n\n\n\n\n\n\n\t\t\t_____");
        printf("\n\t\t\tOPTION FUNCTION");
        printf("\n\t\t\t[1]\tADDITION");
        printf("\n\t\t\t[2]\tSUBTRACTION");
        printf("\n\t\t\t[3]\tMULTIPLICATION");
        printf("\n\t\t\t[4]\tDIVISION");
        printf("\n\t\t\t[5]\tSQUARE");
        printf("\n\t\t\t[6]\tFACTORIAL");
        printf("\n\t\t\t[0]\tEXIT");
        printf("\n\t\t_______________");
        printf("\n\nENTER YOUR CHOICE:");
        scanf("%ld", &cho);

        switch (cho)
        {
        case 1:
            printf("\n\t\t\t\t__________");
            printf("\n\t\t\t\tADDITION");
            printf("\n\t\t\t\t__________");
            printf("\n\t\t\t\tENTER FIRST NUMBER:");
            scanf("%lf", &op1);
            printf("\n\t\t\t\tENTER SECOND NUMBER:");
            scanf("%lf", &op2);
            ans = add(op1, op2);
            printf("\n\t\t\t\tANSWER = %.2lf", ans);
            break;
        case 2:
            printf("\n\t\t\t\t__________");
            printf("\n\t\t\t\tSUBTRACTION");
            printf("\n\t\t\t\t__________");
            printf("\n\t\t\t\tENTER FIRST NUMBER:");
            scanf("%lf", &op1);
            printf("\n\t\t\t\tENTER SECOND NUMBER:");
            scanf("%lf", &op2);
            ans = sub(op1, op2);
            printf("\n\t\t\t\tANSWER = %.2lf", ans);
            break;
        case 3:
            printf("\n\t\t\t\t__________");
            printf("\n\t\t\t\tMULTIPLICATION");
            printf("\n\t\t\t\t__________");
            printf("\n\t\t\t\tENTER FIRST NUMBER:");
            scanf("%lf", &op1);
            printf("\n\t\t\t\tENTER SECOND NUMBER:");
            scanf("%lf", &op2);
            ans = mul(op1, op2);
            printf("\n\t\t\t\tANSWER = %.2lf", ans);
            break;
        case 4:
            printf("\n\t\t\t______________");
            printf("\n\t\t\t DIVISION");
            printf("\n\t\t\t______________");
            printf("\n\n\t\t\tENTER FIRST NUMBER :");
            scanf("%lf", &op1);
            printf("\n\n\t\t\tENTER SECOND NUMBER :");
            scanf("%lf", &op2);
            ans = div(op1, op2);
            printf("\n\t\t\t\tANSWER = %.2lf", ans);
            break;
        case 5:
            printf("\n\t\t\t______________");
            printf("\n\t\t\tSQUARE");
            printf("\n\t\t\t______________");
            printf("\n\n\t\t\tENTER FIRST NUMBER :");
            scanf("%lf", &op1);
            ans = sqr(op1);
            printf("\n\t\t\t\tANSWER = %.2lf", ans);
            break;
        case 6:
            printf("\n\t\t\t______________");
            printf("\n\t\t\tFACTORIAL");
            printf("\n\t\t\t______________");
            printf("\n\n\t\t\tENTER NUMBER :");
            scanf("%d", &fno);
            f = fact(fno);
            printf("\n\t\t\t\tANSWER = %ld", f);
            break;
        case 0:
            printf("\n\t\t\tExiting the program...");
            return 0; // Exit the program
        default:
            printf("\n\t\t\t\t WRONG OPTION....TRY AGAIN");
            break;
        }

        printf("\n\n\n Do you want to continue? [yes/no]:");
        fflush(stdin);
        scanf(" %c", &ch); // Note the space before %c to consume any leftover newline character
    } while (ch == 'y' || ch == 'Y' || ch == 'yes' || ch == 'YES');

    return 0;
}

/* Function Definitions */
double add(double a, double b)
{
    return (a + b);
}

double sub(double a, double b)
{
    return (a - b);
}

double mul(double a, double b) /* function for multiplication */
{
    return (a * b);
}
double div(double a, double b)
{
    return (a / b);
}
double sqr(double a) /* function for square */
{
    return (a * a);
}
long int fact(int no)
{
    int i;
    long int ff = 1;
    for (i = no; i >= 1; i--)
    {
        /* find out factorial */
        ff = ff * i;
    }
    return (ff);
}
