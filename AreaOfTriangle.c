#include<stdio.h>

void main() {
    int h, b;
    float area;
    printf("Enter the height:");
    scanf("%d", &h);
    printf("Enter the base:");
    scanf("%d", &b);
    area=(h*b)/(float)2;
    printf("Area of triangle=%f", area);
}