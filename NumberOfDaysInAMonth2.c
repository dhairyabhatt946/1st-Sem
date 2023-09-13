#include<stdio.h>

void main(){
	int n;
	printf("Enter a number from 1 to 12: ");
	scanf("%d", &n);
	if(n>=1 && n<=12){
		switch(n){
			case 2:
				printf("28 days");
				break;
			case 4:
				printf("30 days");
				break;
			case 6:
				printf("30 days");
				break;
			case 9:
				printf("30 days");
				break;
			case 11:
				printf("30 days");
				break;
			default:
				printf("31 days");
				break;
		}
	}
	else{
		printf("Invalid input. Enter a valid number.");
	}
}
