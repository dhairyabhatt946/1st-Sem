#include<stdio.h>

void main() {
    int num, a, b;
    printf("Enter the number:");
    scanf("%d", &num);
    a=num<<1;
    b=num>>1;
    printf("Multiplication by 2=%d\n", a);
    printf("Division by 2=%d", b);
}