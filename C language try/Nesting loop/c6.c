#include <stdio.h>

int main()
{
    int l = 0, a = 0, b = 0;
    char nm[20];
    printf("Enter your name:-");
    scanf("%s", nm);
    printf("\n \n");
    while (nm[l] != '\0')
    {
        l = l + 1;
    }
    for (b = 0; b < l; b++)
    {
        for (a = 0; a <= b; a++)
        {
            printf("%c", nm[a]);
        }
        printf("\n");
    }

    return 0;
}
