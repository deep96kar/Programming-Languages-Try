#include <stdio.h>
#include <string.h>

int main()
{
    char nm[20], nn[20];
    printf("Enter your name:-");
    scanf("%s", nm);
    printf("Enter your friend name:-");
    scanf("%s", nn);
    if (strcmp(nm, nn) == 0)
    {
        printf("Both name are equal \n");
    }
    else
    {
        printf("Both name are not equal");
    }

    return 0;
}