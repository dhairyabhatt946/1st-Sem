#include<stdio.h>

void main(){
	int i, count = 0;
	char s1[1000];
	printf("Enter the string: ");
	gets(s1);
	printf("Entered string is : %s", s1);
	for(i=0;s1[i]!='\0';i++){
		count++;
	}
	printf("\nLength of the string is: %d", count);
}
