#include<stdio.h>

void main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n], i;
    for(i=0;i<n;i++){
        printf("Enter an element into arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    int j, length, temp;
    length=n/2;
    j=n-1;
    for(i=0;i<length;i++){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
    }
    printf("\nReverse elements of array are: ");
    for(i=0;i<n;i++){
        printf("\narr[%d] = %d", i, arr[i]);
    }
}