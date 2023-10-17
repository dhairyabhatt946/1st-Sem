#include<stdio.h>

void main(){
	int n, m, i, j;
	printf("Enter the size of array 1: ");
	scanf("%d", &n);
	printf("Enter the size of array 2: ");
	scanf("%d", &m);
	int arr1[n], arr2[m];
	for(i=0;i<n;i++){
		printf("Enter an element into arr1[%d]: ", i);
		scanf("%d", &arr1[i]);
	}
	for(j=0;j<m;j++){
		printf("Enter an element into arr2[%d]: ", j);
		scanf("%d", &arr2[j]);
	}
	for(i=0;i<m;i++){
		arr1[i]=arr2[i];
	}
	printf("Elements in array 1 are: ");
	for(i=0;i<m;i++){
		printf("\narr1[%d]: %d", i, arr1[i]);
	}
	printf("\nElements in array 2 are: ");
	for(i=0;i<m;i++){
		printf("\narr2[%d]: %d", i, arr2[i]);
	}
}
