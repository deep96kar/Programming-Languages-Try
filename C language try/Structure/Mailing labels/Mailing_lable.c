#include <stdio.h>
#include <conio.h>

struct add
{
    int eno;
    char name[30];
    char ad[80];
    char city[20];
    char state[20];
    char pin[15];
};

int main()
{
    struct add client[2];
    int i, j;
    char c;

    for (i = 0; i < 2; i++)
    {
        printf("\n======== ENTER DETAIL OF CLIENT %2d ========\n", i + 1);
        printf("\nENTER CLIENT NUMBER:\n");
        scanf("%d", &client[i].eno);
        fflush(stdin);

        printf("\nENTER CLIENT NAME:\n");
        gets(client[i].name);

        printf("\nENTER CLIENT ADDRESS: [$ to terminate] \n");
        c = getchar();
        j = 0;
        while (c != '$')
        {
            client[i].ad[j] = c;
            j++;
            c = getchar();
        }
        client[i].ad[j] = '\0';
        fflush(stdin);

        printf("\nENTER CLIENT CITY:\n");
        gets(client[i].city);

        printf("\nENTER CLIENT STATE:\n");
        gets(client[i].state);

        printf("\nENTER CLIENT PINCODE:\n");
        gets(client[i].pin);
    }

    // Displaying mailing labels
    for (i = 0; i < 2; i++)
    {
        printf("\n\n** MAILING LABEL **\n");
        printf("CLIENT NUMBER: %d\n", client[i].eno);
        printf("NAME: %s\n", client[i].name);
        printf("ADDRESS: %s\n", client[i].ad);
        printf("CITY: %s\n", client[i].city);
        printf("STATE: %s\n", client[i].state);
        printf("PIN CODE: %s\n", client[i].pin);
    }
}