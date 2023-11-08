#include<stdio.h>

void swap(int *, int *);
void main(){
	int a, b;
	printf("Enter the value of A: ");
	scanf("%d", &a);
	printf("Enter the value of B: ");
	scanf("%d", &b);
	printf("Values before calling: A=%d, B=%d", a, b);
	swap(&a, &b);
	printf("\nValues after calling: A=%d, B=%d", a, b);
}
void swap(int *x, int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
