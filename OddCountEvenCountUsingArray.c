#include<stdio.h>

void main(){
	int n,i,oddCount=0,evenCount=0;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter an element in arr[%d]: ",i);
		scanf("%d",&arr[i]);
		if(arr[i]%2==0){
			evenCount=evenCount+1;
		}
		else{
			oddCount=oddCount+1;
		}
	}
	printf("Odd Numbers=%d \nEven Numbers=%d",oddCount,evenCount);	
}
