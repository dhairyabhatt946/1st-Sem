#include<stdio.h>

void main(){
	int n,i,factorial=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		factorial=factorial*i;
	}
	printf("Factorial of %d=%d",n,factorial);
}
