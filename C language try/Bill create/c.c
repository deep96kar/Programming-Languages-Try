#include<stdio.h>
#include<conio.h>
int main()
{
    int t = 0, i = 0, n = 0, an[30], rate[30], quantity[30], h = 0;
    char product[10];
    printf("\nEnter the value of n:-");
    scanf("%d", &n);
    printf("\nproduct, rate, quantity\n");
    for(i = 0; i < n; i++)
    {
        printf("Enter product name:");
        scanf("%s", product);
        printf("Enter rate:-");
        scanf("%d", &rate[i]);
        printf("Enter quantity:-");
        scanf("%d", &quantity[i]);
    }
    printf("product | rate  | quantity | Amount");
    printf("\n____________________________________________________________");
    for(i = 0; i < n; i++)
    {
        an[i] = rate[i] * quantity[i];
        h = h + an[i];
        printf("\n  %s \t|   %d\t|    %d \t   |   %d", product, rate[i], quantity[i], an[i]);
    }
    
    printf("\n\t\t\tTotal:- %d", h);
}


