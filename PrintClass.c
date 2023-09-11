#include<stdio.h>

void main(){
    float maths, cpc, df, physics, es, pct;
    printf("Enter the marks of Maths:");
    scanf("%f", &maths);
    printf("Enter the marks of CPC:");
    scanf("%f", &cpc);
    printf("Enter the marks of DF:");
    scanf("%f", &df);
    printf("Enter the marks of Physics:");
    scanf("%f", &physics);
    printf("Enter the marks of ES:");
    scanf("%f", &es);
    pct=(maths+cpc+df+physics+es)/(float)5;
    printf("Percentage=%f\n", pct);
    if(pct<=35){
        printf("Fail");
    }
    else if(pct>=36 && pct<=45){
        printf("Pass");
    }
    else if(pct>=46 && pct<=60){
        printf("Second class");
    }
    else if(pct>=61 && pct<=70){
        printf("First class");
    }
    else{
        printf("Distinction");
    }
}