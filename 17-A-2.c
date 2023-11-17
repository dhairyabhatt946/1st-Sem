#include<stdio.h>

void main(){
    int n, *i;
    printf("Enter any integer value: ");
    scanf("%d", &n);
    i=&n;
    printf("%d %d %d\n", n, i, *i);
    float fl, *f;
    printf("Enter any float value: ");
    scanf("%f", &fl);
    f=&fl;
    printf("%f %d %f\n", fl, f, *f);
    double db, *d;
    printf("Enter any float value: ");
    scanf("%lf", &db);
    d=&db;
    printf("%lf %d %lf\n", db, d, *d);
    char chr, *c;
    printf("Enter any character: ");
    scanf(" %c", &chr);
    c=&chr;
    printf("%c %d %c\n", chr, c, *c);
}