#include<stdio.h>
#include<math.h>

void main(){
    double a, b, c, discriminant, root1, root2;
    printf("Enter the co-efficients(a, b, c):");
    scanf("%lf %lf %lf", &a, &b, &c);
    discriminant=(b*b)-(4*a*c);
    if(discriminant>0){
        root1=(-b+sqrt(discriminant)/(2*a));
        root2=(-b-sqrt(discriminant)/(2*a));
        printf("Roots are real and different.\n");
        printf("root1=%lf \nroot2=%lf", root1, root2);
    }
    else if(discriminant==0){
        root1=root2=-b/(2*a);
        printf("Roots are real and same.\n");
        printf("root1=root2=%lf", root1);
    }
    else{
        double realPart=-b/(2*a);
        double imaginaryPart=sqrt(fabs(discriminant))/(2*a);//fabs works like modulus function. eg:-|-5|=5
        printf("Roots are complex and different.\n");
        printf("root1=%lf+%lf\n", realPart, imaginaryPart);
        printf("root2=%lf-%lf", realPart, imaginaryPart);
    }
}