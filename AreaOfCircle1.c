#include<stdio.h>
#define PI 3.14

void main() {
    int r;
    float area;
    printf("Enter the radius:");
    scanf("%d", &r);
    area=PI*r*r;
    printf("Area of circle=%f", area);
}