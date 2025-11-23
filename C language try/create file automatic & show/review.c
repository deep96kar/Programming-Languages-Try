#include<stdio.h>

int main(){
   char nm[20], nn[20];
    FILE *F1;
    F1 = fopen("deep.txt", "r");
    fscanf(F1,"%s %s",nm,nn);
    printf("%s %s",nm,nn);
    return 0;
}