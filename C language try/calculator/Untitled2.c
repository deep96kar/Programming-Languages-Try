#include <stdio.h>
#include <conio.h>
// #include <graphics.h>

int main()
{
    double op1, op2, ans;
    char ch;
    int fno;
    long int cho, f, sq;
    // int gd = DETECT, gm;

    /* Function Declaration */
    double add(double, double);
    double sub(double, double);
    double mul(double, double);
    double div(double, double);
    long int fact(int);
    double sqr(double);

    /* Initialize the graphics */
    // initgraph(&gd, &gm, &ch);

    do
    {
        /* Clear the graphics screen */
        cleardevice();
        setcolor(5);
        /* Sets font style */
        // settextstyle(TRIPLEX_FONT, HORIZ_DIR, 8);
        outtextxy(80, 50, "CALCULATOR");

        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t_____");
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
        scanf("%d", &cho);

        switch (cho) /* switch to check cases */
        {
        case 1:
        {
            cleardevice();
            printf("\n\t\t\t\t__________");
            printf("\n\t\t\t\tADDITION");
            printf("\n\t\t\t\t__________");
            printf("\n\t\t\t\tENTER FIRST NUMBER:");
            scanf("%lf", &op1);
            printf("\n\t\t\t\tENTER SECOND NUMBER:");
            scanf("%lf", &op2);

            /* call the function for addition */
            ans = add(op1, op2);
            printf("\n\t\t\t\tANSWER = %.2lf", ans);
            break;
        }
        case 2:
        {
            cleardevice();
            printf("\n\t\t\t\t__________");
            printf("\n\t\t\t\tSUBTRACTION");
            printf("\n\t\t\t\t__________");
            printf("\n\t\t\t\tENTER FIRST NUMBER:");
            scanf("%lf", &op1);
            printf("\n\t\t\t\tENTER SECOND NUMBER:");
            scanf("%lf", &op2);
            /* call the function for subtraction */
            ans = sub(op1, op2);
            printf("\n\t\t\t\tANSWER = %.2lf", ans);
            break;
        }
        case 3:
        {
            cleardevice();
            printf("\n\t\t\t\t__________");
            printf("\n\t\t\t\tMULTIPLICATION");
            printf("\n\t\t\t\t__________");
            printf("\n\t\t\t\tENTER FIRST NUMBER:");
            scanf("%lf", &op1);
            printf("\n\t\t\t\tENTER SECOND NUMBER:");
            scanf("%lf", &op2);
            /* call the function for multiplication */
            ans = mul(op1, op2);
            printf("\n\n\t\tANSWER = %.2lf", ans);
            break;
        }
        case 4:
        {
            cleardevice();
            printf("\n\t\t\t______________");
            printf("\n\t\t\t DIVISION");
            printf("\n\t\t\t______________");
            printf("\n\n\t\t\tENTER FIRST NUMBER :");
            scanf("%lf", &op1);
            printf("\n\n\t\t\tENTER SECOND NUMBER :");
            scanf("%lf", &op2);

            /* call the function for division */
            ans = div(op1, op2);
            printf("\n\n\t\t\tANSWER = %.2lf", ans);
            break;
        }
        case 5:
        {
            cleardevice();
            printf("\n\t\t\t______________");
            printf("\n\t\t\tSQUARE");
            printf("\n\t\t\t______________");
            printf("\n\n\t\t\tENTER FIRST NUMBER :");
            scanf("%lf", &op1);

            /* call the function for square */
            ans = sqr(op1);
            printf("\n\n\t\t\tANSWER = %.2lf", ans);
            break;
        }
        case 6:
        {
            cleardevice();
            printf("\n\t\t\t______________");
            printf("\n\t\t\tFACTORIAL");
            printf("\n\t\t\t______________");
            printf("\n\n\t\t\tENTER NUMBER :");
            scanf("%d", &fno);

            /* call the function for factorial */
            f = fact(fno);
            printf("\n\n\t\t\tANSWER = %ld", f);
            break;
        }

        case 0:
        {
            exit(0); /* terminates the process */
        }

        default:
        {
            printf("\n\n\t\t WRONG OPTION....TRY AGAIN");
            break;
        }
        }

        printf("\n\n\n Do you want to continue? [y/n]:");
        fflush(stdin);
        scanf("%c", &ch);
    } while (ch == 'y' || ch == 'Y');
}
double add(double a, double b) /* function for addition */
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
