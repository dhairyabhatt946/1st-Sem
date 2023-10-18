#include<stdio.h>

void main(){
	int arr[3][3], i, j, positiveCount=0, negativeCount=0, zeros=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter an element into arr[%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
			if(arr[i][j]>0){
				positiveCount++;
			}
			else if(arr[i][j]<0){
				negativeCount++;
			}
			else{
				zeros++;
			}
		}
	}
	printf("Positive count = %d \nNegative count = %d \nZeros = %d", positiveCount, negativeCount, zeros);
}
