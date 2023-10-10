#include<stdio.h>

void main(){
	int n,i,sum1=0,product=1;
	float avg=0,geometricMean,harmonicMean,sum2=0,rem;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter an element into arr[%d]: ",i);
		scanf("%d",&arr[i]);
		sum1=sum1+arr[i];
		product=product*arr[i];
		rem=1/(float)arr[i];
		sum2=sum2+rem;
	}
	avg=sum1/(float)n;
	geometricMean=pow(product,1/(float)n);
	harmonicMean=n/sum2;
	printf("Average=%f \nGeometric Mean=%f \nHarmonic Mean=%f",avg,geometricMean,harmonicMean);
}
