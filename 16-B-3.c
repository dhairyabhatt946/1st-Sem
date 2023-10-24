#include<stdio.h>

void main(){
    int n;
    printf("Enter the rows and columns of square matrix: ");
    scanf("%d", &n);
    int arr[n][n], i, j;
    printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("Enter an element into arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nMatrix A is: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("arr[%d][%d]=%d\t", i, j, arr[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    printf("\nDiagonal elements are: ");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                printf("%d, ", arr[i][j]);
                sum=sum+arr[i][j];
            }
        }
    }
    printf("\nSum of diagonal elements = %d", sum);
}