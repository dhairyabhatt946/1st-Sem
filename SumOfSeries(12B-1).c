#include<stdio.h>

void main(){
	int n,i,sum=0,x=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		sum=x+i+1;
		x=sum;
	}
	printf("Sum=%d",sum);
}
