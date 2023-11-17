#include<stdio.h>

void main(){
    int a, b, *c, *d;
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);
    c=&a, d=&b;
    printf("Sum=%d", *c + *d);
}