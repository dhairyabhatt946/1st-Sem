#include<stdio.h>

void main() {
    int a, b, c;
    float avg;
    printf("Enter the Value of A:");
    scanf("%d", &a);
    printf("Enter the Value of B:");
    scanf("%d", &b);
    printf("Enter the Value of C:");
    scanf("%d", &c);
    avg=(a+b+c)/(float)3;
    printf("Average of three numbers=%f", avg);
}