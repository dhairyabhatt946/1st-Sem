#include<stdio.h>

void main() {
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    if(num & 1){
        printf("The number is odd.");
    }
    else{
        printf("The number is even.");
    }
}