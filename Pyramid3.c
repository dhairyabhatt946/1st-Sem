#include<stdio.h>

void main(){
    int i,j;
    char ch1='1',ch2='A';
    for(i=1;i<=5;i++){
        for(j=1;j<=5-i;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            if(i%2==1){
                if(j%2==1){
                    printf("%c",ch1);
                    ch1++;
                }
                else{
                    printf(" ");
                }
            }
            else{
                if(j%2==1){
                    printf("%c",ch2);
                    ch2++;
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
        ch1='1';
    }
}