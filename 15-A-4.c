#include<stdio.h>

void main(){
	char arr1[26], arr2[26], upper='A', lower='a';
	int i, j;
	for(j=65;j<=90;j++){
		arr1[j]=upper;
		upper++;
	}
	for(j=97;j<=122;j++){
		arr2[j]=lower;
		lower++;
	}
	printf("Enter the ASCII value: ");
	scanf("%d", &i);
	if(i>=65 && i<=90){
		printf("%c", arr1[i]);
	}
	else if(i>=97 && i<=122){
		printf("%c", arr2[i]);
	}
	else{
		printf("Invalid input");
	}
}
