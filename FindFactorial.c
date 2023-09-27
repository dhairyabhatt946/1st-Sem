#include<stdio.h>

void main(){
	int n, i, sum=1;
	printf("Enter a number: ");
	scanf("%d", &n);
	i=n;
	while(i<=n && i>0){
		sum=sum*i;
		i--;
	}
	printf("Factorial of %d=%d", n, sum);
}
