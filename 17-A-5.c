#include<stdio.h>

void main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n], *p[n], i;
    for(i=0;i<n;i++){
        printf("Enter an element into arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        p[i]=&arr[i];
    }
    for(i=0;i<n;i++){
        printf("arr[%d]=%d\n", i, *p[i]);
    }
}