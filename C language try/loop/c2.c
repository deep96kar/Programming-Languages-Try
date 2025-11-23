#include <stdio.h>

int main()
{
    int l = 0, i;
    char nm[20];
    printf("Enter name:-");
    scanf("%s", nm);
    while (nm[l] != '\0')
    {
        l = l + 1;
    }
    printf("The length of the  char is:-%d", l);

    return 0;
}