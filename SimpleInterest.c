#include<stdio.h>

void main() {
    int p, r, t;
    float si;
    printf("Enter the principal:");
    scanf("%d", &p);
    printf("Enter the rate of interest:");
    scanf("%d", &r);
    printf("Enter the time period in years:");
    scanf("%d", &t);
    si=(p*r*t)/(float)100;
    printf("Simple interest=%f", si);
}