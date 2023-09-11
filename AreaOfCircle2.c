#include<stdio.h>

void main() {
    const float PI=3.14;
    int r;
    float area;
    printf("Enter the radius:");
    scanf("%d", &r);
    area=PI*r*r;
    printf("Area of circle=%f", area);
}