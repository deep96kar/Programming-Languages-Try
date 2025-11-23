#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 0, b = 0;
    printf("\n Enter a month number:- ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        b = 31;
        break;
    case 2:
        b = 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        b = 30;
    default:
        break;
    }
    printf("\n Days of that month:- %d", b);
    return 0;
}