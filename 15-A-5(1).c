#include<stdio.h>
#include<string.h>

void main(){
	char s1[1000];
	printf("Enter the string: ");
	gets(s1);
	printf("Entered string is: %s", s1);
	printf("\nLength of string is: %d", strlen(s1));
}
