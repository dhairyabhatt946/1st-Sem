#include<stdio.h>

void main(){
	int n,i;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter an element in arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=n-1;i>=0;i--){
		printf("arr[%d]=%d\n",i,arr[i]);
	}
}
