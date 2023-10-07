#include<stdio.h>

void main(){
    int n,i,digit,freq[10]={0};
    printf("Enter a number: ");
    scanf("%d",&n);
    for(;n!=0;){
        digit=n%10;
        freq[digit]++;
        n=n/10;
    }
    printf("Frequency of the digits:\n");
    for(i=0;i<10;i++){
        if(freq[i]>0){
            printf("Digit %d: %d times\n",i,freq[i]);
        }
    }
}