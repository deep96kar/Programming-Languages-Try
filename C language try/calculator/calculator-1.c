#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    printf("\n Enter a number ");
    scanf("%d", &a);
    printf("\n Enter b number ");
    scanf("%d", &b);
    printf("\n 1>plus 2>minus 3>multiply 4>division ");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        d = (a + b);
        break;
    case 2:
        d = (a - b);
        break;
    case 3:
        d = (a * b);
        break;
    case 4:
        d = (a / b);
        break;
    default:
        printf("\n worng choice");
        break;
    }
    printf("\n value of the  equal:-  %d", d);
    return 0;
};