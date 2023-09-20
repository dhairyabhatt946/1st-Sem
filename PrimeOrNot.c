#include<stdio.h>

void main(){
	int n, i=2, count=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	while(i<n){
		if(n%i==0){
			count=count+1;
		}
		i++;
	}
	if(count==0){
		printf("Prime Number");
	}
	else{
		printf("Not Prime Number");
	}
}
