#include<stdio.h>

void main(){
	int n,i,positive=0,negative=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter any positive or negative number: ");
		scanf("%d",&arr[i]);
		if(arr[i]>0){
			positive=positive+1;
		}
		else if(arr[i]<0){
			negative=negative+1;
		}
		else{
			printf("Wrong Input");
		}
	}
	printf("Positive Numbers=%d \nNegative Numbers=%d",positive,negative);
}
