#include<stdio.h>

void main(){
    int a, b, c, max;
    printf("Enter the value of A:");
    scanf("%d", &a);
    printf("Enter the value of B:");
    scanf("%d", &b);
    printf("Enter the value of C:");
    scanf("%d", &c);
    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("Largest number=%d", max);
}