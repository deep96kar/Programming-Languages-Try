#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char s[20];
    int m = 0, i, j, k;

    printf("Enter a String: ");
    gets(s);

    m = 0;
    for (i = 1; i <= strlen(s); i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", s[m]);
            m++;
            if (m == strlen(s))
                m = 0;
        }

        for (k = 1; k <= 2 * strlen(s) - i * 2; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c", s[m]);
            m++;
            if (m == strlen(s))
                m = 0;
        }
        printf("\n");
    }

    for (i = strlen(s) - 1; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", s[m]);
            m++;
            if (m == strlen(s))
                m = 0;
        }
        for (k = 1; k <= 2 * strlen(s) - i * 2; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%c", s[m]);
            m++;
            if (m == strlen(s))
                m = 0;
        }
        printf("\n");
    }
}