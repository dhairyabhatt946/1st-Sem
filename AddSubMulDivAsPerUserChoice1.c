#include<stdio.h>

void main() {
    float a, b;
    char c;
    printf("Enter the value of A:");
    scanf("%f", &a);
    printf("Enter the value of B:");
    scanf("%f", &b);
    printf("Enter a choice(+ for addition, - for subtraction, * for multiplication, / for division):");
    scanf(" %c", &c);
    if(c=='+'){
        printf("Addition=%f", a+b);
    }
    if(c=='-'){
        printf("Subtraction=%f", a-b);
    }
    if(c=='*'){
        printf("Multiplication=%f", a*b);
    }
    if(c=='/'){
        if(b!=0){
            printf("Division=%f", a/b);
        }
        else{
            printf("Wrong Input");
        }
    }
    else{
        printf("Wrong Input");
    }
}