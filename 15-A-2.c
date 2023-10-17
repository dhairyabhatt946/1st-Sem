#include<stdio.h>

void main(){
	int n, i, count = 0;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter an element into arr[%d]: ", i);
		scanf("%d", &arr[i]);
		if(arr[i]<0){
			count++;
		}
	}
	printf("Number of negarive elements = %d", count);
}
