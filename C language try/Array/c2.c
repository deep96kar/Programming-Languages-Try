#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 0, b = 0, c = 0, d = 0, l = 0, n[5];
    for (l = 1; l <= 5; l++)
    {
        printf("\n %d Enter number:-", l);
        scanf("%d", &n[l]);
    }
    printf("\n \n");
    printf("\n 1>insert;-");
    printf("\n 2>delete:-");
    printf("\n Enter number choice:-");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("1>positon number:-");
        scanf("%d", &b);
        printf("2>Enter number:-");
        scanf("%d", &c);
        for (l = 1; l <= 5; l++)
        {
            if (b == l)
            {
                n[l] = c;
                printf("%d", l);
            }
        }
    }
}