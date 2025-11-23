#include <stdio.h>

int main()
{
    char nm[20], nn[20];
    FILE *F1;
    printf("Enter your name is small letter:-");
    scanf("%s", nm);
    printf("Enter another name:-");
    scanf("%s", nn);
    F1 = (fopen("deep.txt", "a"));
    fprintf(F1, "\n %s %s", nm, nn);
    return 0;
}