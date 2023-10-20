#include<stdio.h>

void main(){
    int n;
    printf("Enter the size of an array: ");
    scanf("%d", &n);
    int arr[n], i, j;
    for(i=0;i<n;i++){
        printf("Enter an element into arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]==arr[i] && arr[j]!=0){
                arr[j]=0;
            }
        }
    }
    printf("\nModified elements of array are: ");
    for(i=0;i<n;i++){
        if(arr[i]!=0){
            printf("\narr[%d] = %d", i, arr[i]);
        }
    }
}