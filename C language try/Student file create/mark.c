#include <stdio.h>
#include<conio.h>
int main()
{
    int roll = 0, mark = 0;
    char name[20], sec[20], clas[20];
     FILE *F2;

    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enter student roll: ");
    scanf("%d", &roll);
    printf("Enter student sec: ");
    scanf("%s", sec);
    printf("Enter student class: ");
    scanf("%s", clas);
    printf("Enter student marks: ");
    scanf("%d", &mark);
    F2 = (fopen("mark.txt", "a"));
    fprintf(F2, "\n\nStudent name:-%s\nStudent roll:-%d\nStudent sec:-%s\nStudent class:-%s\nStudent marks:-%d", name, roll, sec, clas, mark);
    return 0;
}