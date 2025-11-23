#include <stdio.h>

int main()
{
    int a = 0, n[5], l = 0;
    for (l = 1; l <= 5; l++)
    {
        printf("\n %d Enter number:-", l);
        scanf("%d", &n[l]);
    }
    for (l = 1; l <= 5; l++)
    {
        printf("\n %d", n[l]);
    }
    return 0;
}