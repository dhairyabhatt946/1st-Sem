#include<stdio.h>

void main(){
	int i,j,n=1,a=1;
	double sum1=0,x=1,sum2=0;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			n=n*j;
			sum2=a/(float)n;
		}
		sum1=x+sum2;
		x=sum1;
	}
	printf("Approximate value of e=%f",sum1);
}
