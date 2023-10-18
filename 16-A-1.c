#include<stdio.h>

void main(){
	int n, m;
	printf("Enter the rows: ");
	scanf("%d", &n);
	printf("Enter the columns: ");
	scanf("%d", &m);
	int arr[n][m];
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter an element into arr[%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("arr[%d][%d] = %d\t", i, j, arr[i][j]);
		}
		printf("\n");
	}
}
