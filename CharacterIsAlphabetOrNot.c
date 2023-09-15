#include<stdio.h>

void main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);
    (ch>='A' && ch<='Z')||(ch>='a' && ch<='z')?printf("Entered character is an alphabet"):printf("Entered character is not an alphabet");
}