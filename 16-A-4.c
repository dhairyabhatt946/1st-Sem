#include<stdio.h>

void main(){
	int n, m;
	printf("Enter the rows: ");
	scanf("%d", &n);
	printf("Enter the columns: ");
	scanf("%d", &m);
	int a[n][m], b[n][m], c[n][m];
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter an element into a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter an element into b[%d][%d]: ", i, j);
			scanf("%d", &b[i][j]);
		}
	}
	printf("Addition of matrices A and B is: \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			c[i][j] = a[i][j] + b[i][j];
			printf("c[%d][%d] = %d\t", i, j, c[i][j]);
		}
		printf("\n");
	}
}
