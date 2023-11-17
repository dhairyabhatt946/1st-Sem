#include<stdio.h>

void main(){
    int var, *p;
    printf("Enter the value of variable: ");
    scanf("%d", &var);
    p = &var;
    printf("Entered value = %d", *p);
    printf("\nAddress of the variable = %d", p);
}