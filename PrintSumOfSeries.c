#include<stdio.h>

void main(){
	int n,i=1,sum1=0,sum2=0,finalSum;
	printf("Enter a number:");
	scanf("%d",&n);
	while(i<=n){
		if(i%2!=0){
			sum1=sum1+i;
			
		}
		else{
			sum2=sum2-i;
			
		}
		i++;
		
	}
	finalSum=sum1+sum2;
	printf("Sum=%d",finalSum);
}
