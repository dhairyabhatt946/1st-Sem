#include<stdio.h>

void maxmin(int *, int *);
void main(){
    int a, b, max, min;
    printf("Enter the value of A: ");
    scanf("%d", &a);
    printf("Enter the value of B: ");
    scanf("%d", &b);
    max=a, min=b;
    maxmin(&max, &min);
    printf("Max=%d \nMin=%d", max, min);
}
void maxmin(int *c,int *d){
    if(*c<*d){
        int temp=*c;
        *c=*d;
        *d=temp;
    }
}