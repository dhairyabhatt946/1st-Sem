#include<stdio.h>

void main(){
	int x, y, i=1,sum=1;
	printf("Enter the value of X: ");
	scanf("%d", &x);
	printf("Enter the value of Y: ");
	scanf("%d", &y);
	while(i<=y){
		sum=sum*x;
		i++;
	}
	printf("%d", sum);
}
