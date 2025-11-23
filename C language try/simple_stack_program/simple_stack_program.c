#include <stdio.h>
#include <conio.h>
#include<stdlib.h>

int arr[10], top = -1;

void main()
{
    int choice;
    void push();
    void pop();
    void peep();
    void change();
    void display();
    void exit();

    while (1)
    {

        printf("\n\n\t@@@@@@@@@@@@@@@@@@@@@@@@\n");
        printf("\n\tPROGRAM FOR SIMPLE STACK");
        printf("\n\n\t@@@@@@@@@@@@@@@@@@@@@@@@\n");

        printf("\n\tCHOICE\t\tOPTION");
        printf("\n\t===============================");
        printf("\n\t[1]\t\tPUSH");
        printf("\n\t[2]\t\tPOP");
        printf("\n\t[3]\t\tPEEP");
        printf("\n\t[4]\t\tCHANGE");
        printf("\n\t[5]\t\tDISPLAY");
        printf("\n\t[6]\t\tQUIT");
        printf("\n\t===============================");

        printf("\n\tEnter Your Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            peep();
            break;
        }
        case 4:
        {
            change();
            break;
        }
        case 5:
        {
            display();
            break;
        }
        case 6:
        {
            exit(1);
        }
        default:
        {
            printf("\n\n\t\tWrong Choice! Try Again.......");
            getch();
        }
        }
    }
}

void push()
{
    int num;

    if (top + 1 >= 10)
    {
        printf("\n\n\t\tSTACK OVERFLOW............");
        getch();
    }
    else
    {
        printf("\n\n\t\tEnter any integer value: ");
        scanf("%d", &num);
        arr[++top] = num;
    }
}

void pop()
{
    int tmp;

    if (top == -1)
    {
        printf("\n\nSTACK UNDERFLOW ON POP............");
        getch();
    }
    else
    {
        tmp = arr[top];
        printf("\n\n%d IS DELETED FROM STACK....", tmp);
        getch();
        top = top - 1;
    }
}

void peep()
{
    int i;

    printf("\n\n\t\tWHICH ELEMENT YOU WANT TO DISPLAY FROM TOP :");
    scanf("%d", &i);
    if ((top + i) <= -1)
    {
        printf("\n\n\t\t\tSTACK UNDERFLOW ON PEEP.........");
        getch();
    }
    else
    {
        printf("\n\n\t\t\tVALUE AT %d LOCATION FROM TOP IS : %d", i, arr[top - i + 1]);
        getch();
    }
}

void change()
{
    int i;

    printf("\nWHICH ELEMENT YOU WANT TO CHANGE FROM TOP: ");
    scanf("%d", &i);
    if ((top - i + 1) <= -1)
    {
        printf("\nSTACK UNDERFLOW ON PEEP..................");
        getch();
    }
    else
    {
        printf("\nVALUE AT THIS LOCATION IS: %d", arr[top - i + 1]);
        printf("\nENTER NEW VALUE: ");
        scanf("%d", &arr[top - i + 1]);
    }
}

void display()
{
    int i;

    printf("\n==================");
    printf("\n STACK CONTAINS");
    printf("\n==================");
    for (i = 0; i <= top; i++)
    {
        printf("\n%d", arr[i]);
    }
    if (i == 0)
        printf("\n\n\tEMPTY STACK...........");
    else
        printf("\n<TOP");
    getch();
}
