#include<stdio.h>

float max(float , float , float );
void main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float res=max(a, b, c);
    printf("Max=%f", res);
}
float max(float a, float b, float c){
    float max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    return max;
}