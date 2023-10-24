#include<stdio.h>

void main(){
    int n, m, o;
    printf("Enter the rows of matrix A: ");
    scanf("%d", &n);
    printf("Enter the columns of matrix A and rows of matrix B: ");
    scanf("%d", &m);
    printf("Enter the columns of matrix B: ");
    scanf("%d", &o);
    int a[n][m], b[m][o], c[n][o], i, j, k;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Enter an element into a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<m;i++){
        for(j=0;j<o;j++){
            printf("Enter an element into b[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<o;j++){
            c[i][j]=0;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<o;j++){
            for(k=0;k<m;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("\nMatrix A is: \n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("a[%d][%d]=%d\t", i, j, a[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix B is: \n");
    for(i=0;i<m;i++){
        for(j=0;j<o;j++){
            printf("b[%d][%d]=%d\t", i, j, b[i][j]);
        }
        printf("\n");
    }
    printf("\nMultiplication of A and B is: \n");
    for(i=0;i<n;i++){
        for(j=0;j<o;j++){
            printf("c[%d][%d]=%d\t", i, j, c[i][j]);
        }
        printf("\n");
    }
}