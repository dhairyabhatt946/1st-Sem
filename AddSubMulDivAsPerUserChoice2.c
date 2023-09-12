#include<stdio.h>

void main(){
    float a, b;
    char c;
    printf("Enter the value of A:");
    scanf("%f", &a);
    printf("Enter the value of B:");
    scanf("%f", &b);
    printf("Enter a choice(+ for addition, - for subtraction, * for multiplication, / for division):");
    scanf(" %c", &c);
    switch(c){
        case '+':
        printf("sum=%f", a+b);
        break;
        case '-':
        printf("Subtraction=%f", a-b);
        break;
        case '*':
        printf("Multiplication=%f", a*b);
        break;
        case '/':
        printf("Division=%f", a/b);
        break;
        default:
        printf("Invalid input");
        break;
    }
}