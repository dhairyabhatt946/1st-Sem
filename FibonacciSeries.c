#include<stdio.h>

void main(){
	int first=0,second=1,i,sum=0,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(sum=0;sum<n;){	/*0 and 1 are fix. 0+1=1 1+1=2 1+2=3 2+3=5 and so on*/
		sum=first+second;
		first=second;
		second=sum;
		printf("%d ",sum);
	}
}
