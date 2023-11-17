#include<stdio.h>

void main(){
    int a, b, *x, *y;
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);
    x=&a, y=&b;
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("A=%d, b=%d", a, b);
}