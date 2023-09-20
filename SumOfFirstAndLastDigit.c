#include<stdio.h>

void main(){
	int n, a, b, ld, fd;
	printf("Enter a number: ");
	scanf("%d", &n);
	ld=n%10;
	while(n!=0){
		a=n%10;
		b=b*10+a;
		n=n/10;
	}
	fd=b%10;
	printf("First digit+last digit=%d", fd+ld);
}
