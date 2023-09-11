#include<stdio.h>

void main(){
    int num, lastDigit;
    printf("Enter the number:");
    scanf("%d", &num);
    lastDigit=num%10;
    if(lastDigit%2==0){
        printf("Last digit is even.");
    }
    else{
        printf("Last digit is odd.");
    }
}