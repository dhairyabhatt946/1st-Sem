#include<stdio.h>

void main(){
    char s1[1000];
    printf("Enter the string: ");
    gets(s1);
    int i, length=0;
    for(i=0;s1[i]!='\0';i++){
        length++;
    }
    int j;
    j=length-1;
    char temp;
    for(i=0;i<length/2;i++){
        temp = s1[i];
        s1[i] = s1[j];
        s1[j] = temp;
        j--;
    }
    printf("\nReverse string is: %s", s1);
}