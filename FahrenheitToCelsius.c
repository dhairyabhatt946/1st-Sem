#include<stdio.h>

void main() {
    int f;
    float c;
    printf("Enter the temprature in fahrenheit:");
    scanf("%d", &f);
    c=((f-32)*5)/(float)9;
    printf("Temperature in celsius=%f", c);
}