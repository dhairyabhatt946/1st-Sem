#include<stdio.h>

void main(){
	int a, b, x, y ;
	printf("Enter the value of A: ");
	scanf("%d", &a);
	printf("Enter the value of B: ");
	scanf("%d", &b);
	x=a;
	y=b;
	while(x>=a && x<=b){
		if(x%2==0){
			printf("%d\n", x);
		}
		x++;
	}
	while(y>=b && y<=a){
		if(y%2==0){
			printf("%d\n", y);
		}
		y++;
	}
}
