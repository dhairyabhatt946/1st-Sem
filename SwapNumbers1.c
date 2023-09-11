#include<stdio.h>

void main() {
    int a, b, c;
    printf("Enter the value of A:");
    scanf("%d", &a);
    printf("Enter the value of B:");
    scanf("%d", &b);
    c=a;
    a=b;
    b=c;
    printf("The value of A=%d\n", a);
    printf("The value of B=%d", b);
}