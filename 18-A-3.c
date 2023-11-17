#include<stdio.h>

float simpleInterest(int , float , int);
void main(){
    int principal, timePeriod;
    float roi;
    printf("Enter the principal: ");
    scanf("%d", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &roi);
    printf("Enter the time period: ");
    scanf("%d", &timePeriod);
    float res=simpleInterest(principal, roi, timePeriod);
    printf("Simple Interest=%f", res);
}
float simpleInterest(int a, float b, int c){
    float si=(a*b*c)/100.0;
    return si;
}