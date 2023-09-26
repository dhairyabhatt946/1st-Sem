#include<stdio.h>

void main(){
	int x,y,i,sum=1;
	printf("Enter the value of X: ");
	scanf("%d",&x);
	printf("Enter the value of Y: ");
	scanf("%d",&y);
	for(i=1;i<=y;i++){
		sum=sum*x;
	}
	printf("%d raise to %d=%d",x,y,sum);
}
