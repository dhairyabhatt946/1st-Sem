#include<stdio.h>

void main(){
    int n;
    printf("Enter any month from 1 to 12:");
    scanf("%d", &n);
    switch(n){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("31 days");
        break;
        case 2:
        printf("28 days");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("30 days");
        break;
        default:
        printf("Invalid input");
        break;
    }
}