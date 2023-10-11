#include<stdio.h>

void main(){
	int n,i,sum=0;
	float avg;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter an element into arr[%d]: ",i);
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	avg=sum/(float)n;
	printf("Average=%f\n",avg);
	printf("Numbers higher than the average are: ");
	for(i=0;i<n;i++){
		if(arr[i]>avg){
			printf("%d ",arr[i]);
		}
	}
}
