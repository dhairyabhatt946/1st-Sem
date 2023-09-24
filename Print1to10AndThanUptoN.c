#include<stdio.h>

void main(){
    int n,i=1;
    while(i<=10){
        printf("%d\n",i);
        i++;
    }
    printf("Enter a number: ");
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
}