#include<stdio.h>

int fact(int );
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int res=fact(n);
    printf("Factorial=%d", res);
}
int fact(int n){
    int fact=1, i;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}