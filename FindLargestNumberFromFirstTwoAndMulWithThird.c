#include<stdio.h>

void main(){
	int a, b, c, d;
	printf("Enter the value of A: ");
	scanf("%d", &a);
	printf("Enter the value of B: ");
	scanf("%d", &b);
	printf("Enter the value of C: ");
	scanf("%d", &c);
	d=(a>b)?1:2;
	switch(d){
		case 1:
			printf("%d*%d=%d", a, c, a*c);
			break;
		case 2:
			printf("%d*%d=%d", b, c, b*c);
			break;
	}
}
