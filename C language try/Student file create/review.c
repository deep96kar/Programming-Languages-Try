#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int roll = 0, mark = 0;
    char name[20], sec[20], clas[20];
    FILE *F2;

    F2 = fopen("mark.txt", "r");
    while (fscanf(F2, "Student name:-%s\nStudent roll:-%d\nStudent sec:-%s\nStudent class:-%s\nStudent marks:-%d", name, &roll, sec, clas, &mark) == 5)
    {
        printf("\nName: %s\nRoll: %d\nSection: %s\nClass: %s\nMarks: %d\n", name, roll, sec, clas, mark);
    }

    return 0;
}