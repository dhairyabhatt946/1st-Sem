#include<stdio.h>

int add(int , int );
void main(){
    int a, b;
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);
    int res = add(a, b);
    printf("Sum=%d", res);
}
int add(int a, int b){
    int sum = a + b;
    return sum;
}