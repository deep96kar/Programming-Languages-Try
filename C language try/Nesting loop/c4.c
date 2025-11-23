#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    for (b = 1; b <= 5; b++)
    {
        for (a = 5; a >= b; a--)
        {
            printf(" ");
        }
        for (c = 1; c <= b; c++)
        {
            printf("*");
        }
        for (d = 1; d < b; d++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}