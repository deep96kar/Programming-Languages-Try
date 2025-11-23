#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{

    int loopIndex = 0, bedNumber = 0, menuChoice = 0, floorNumber = 0, searchBedNumber = 0;
    char patientNumber[2], disease[20], doctorName[20];
    FILE *filePointer;

    printf("1>data entry 2>searching:-");
    scanf("%d", &menuChoice);

    if (menuChoice == 1)
    {
        printf("bed no:-");
        scanf("%d", &bedNumber);
        printf("Enter disease:-");
        scanf("%s", disease);
        printf("Enter floor number:-");
        scanf("%d", &floorNumber);
        getchar();
        printf("doctor name:-");
        fgets(doctorName, sizeof(doctorName), stdin);
        filePointer = fopen("deep.txt", "a");
        fprintf(filePointer, "\n%d\t%s\t%d\t%s", bedNumber, disease, floorNumber, doctorName);
        fclose(filePointer);
    }

    if (menuChoice == 2)
    {
        printf("Enter bed no:-");
        scanf("%d", &searchBedNumber);
        filePointer = fopen("deep.txt", "r");
        while (fscanf(filePointer, "%d\t%s\t%d\t%[^\n]", &bedNumber, disease, &floorNumber, doctorName) == 4)
        {
            if (searchBedNumber == bedNumber)
                printf("\n%d\t%s\t%d\t%s", bedNumber, disease, floorNumber, doctorName);
        }
        getch();
    }
}
