#include<stdio.h>

int factorial(int);
void main() {
	int n, a;
	printf("Enter the number: ");
	scanf("%d", &n);
	a=factorial(n);
	printf("Factorial of %d = %d", n, a);
}
int factorial(int d) {
	if(d==0){
		return 1;
	}
	else{
		return d*factorial(d-1);
	}
}
