#include<stdio.h>

void main(){
    int n,m,i=1,sum=0;
    float avg=0;
    printf("How many numbers do you want to enter: ");
    scanf("%d",&m);
    while(i<=m){
        printf("Enter a number: ");
        scanf("%d",&n);
        sum=sum+n;
        i++;
    }
    avg=sum/(float)m;
    printf("Sum=%d \nAverage=%f",sum,avg);
}