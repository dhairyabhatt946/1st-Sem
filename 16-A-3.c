#include<stdio.h>

void main(){
	int arr[20][2], i, j;
	for(i=0;i<20;i++){
		for(j=0;j<2;j++){
			if(j==0){
				printf("Enter the roll number: ");
				scanf("%d", &arr[i][j]);
			}
			else{
				printf("Enter the marks: ");
				scanf("%d", &arr[i][j]);
			}
		}
	}
	for(i=0;i<20;i++){
		for(j=0;j<2;j++){
			if(j==0){
				printf("Roll no: %d", arr[i][j]);
			}
			else{
				printf("\tMarks = %d", arr[i][j]);
			}
		}
		printf("\n");
	}
}
