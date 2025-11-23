#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    for (b = 1; b <= 10; b++)
    {
        for (a = 1; a <= b; a++)
        {
            printf("*");
            // printf("%d", a);
        }
        printf("\n");
    }

    return 0;
}