#include<stdio.h>

void printArray(int , int []);
void main() {
	int n;
	printf("Enter the size of an array: ");
	scanf("%d", &n);
	int arr[n], i;
	for(i=0;i<n;i++) {
		printf("Enter an element into arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	printArray(n, arr);
	
}
void printArray(int n,int arr[]) {
	int i;
	for(i=0;i<n;i++) {
		printf("arr[%d]=%d\n", i, arr[i]);
	}
}
