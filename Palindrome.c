#include<stdio.h>

void main(){
	int n,sum=0,rem,a;
	printf("Enter a number: ");
	scanf("%d",&n);
	a=n;
	while(n!=0){
		rem=n%10;
		sum=sum*10+rem;
		n=n/10;
	}
	if(sum==a){
		printf("%d is palindrome",a);
	}
	else{
		printf("%d is not palindrome",a);
	}
}
