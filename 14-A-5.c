#include<stdio.h>

void main(){
	int arr[5],i,height,weight,count=0;
	for(i=0;i<5;i++){
		printf("Enter the height in cm: ");
		scanf("%d",&height);
		printf("Enter the weight in kg: ");
		scanf("%d",&weight);
		if(height>170 && weight<50){
			count=count+1;
		}
	}
	printf("There are %d people having height greater than 170 and weight less than 50.",count);
}
