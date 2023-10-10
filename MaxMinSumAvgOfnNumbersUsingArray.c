#include<stdio.h>

void main(){
	int n,i,sum=0,max=0,min=0;
	float avg=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter a element into arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=0;i<n;i++){
		sum=sum+arr[i];
		if(arr[i]>arr[0]){
			max=arr[i];
		}
		else if(arr[i]<arr[0]){
			min=arr[i];
		}
	}
	avg=sum/(float)n;
	printf("Max=%d \nMin=%d \nSum=%d \nAverage=%f",max,min,sum,avg);
}
