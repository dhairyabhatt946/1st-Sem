#include<stdio.h>

void replaceChar(char *, char , char );
void main(){
	char str[1000], oldChar, newChar;
	printf("Enter the string: ");
	gets(str);
	printf("Which character do you want to replace: ");
	scanf("%c", &oldChar);
	printf("By which character do you want to replace the old character: ");
	scanf(" %c", &newChar);
	replaceChar(str, oldChar, newChar);
	printf("\nModified string: %s", str);
}
void replaceChar(char *str, char oldChar, char newChar){
	int i;
	int length=strlen(str);
	for(i=0;i<length;i++){
		if(str[i]==oldChar){
			str[i]=newChar;
		}
	}
}
