#include<stdio.h>

void main() {
	int n, i, count=0;
	printf("Enter the size of array : ");
	scanf("%d", &n);
	int arr[n];
	for(i=0;i<n;i++) {
		printf("Enter an element into arr[%d]: ", i);
		scanf("%d", &arr[i]);
		if(arr[i]%3==0){
			count++;
		}
	}
	printf("Number of elements divisible by 3 = %d", count);
}
