#include<stdio.h>

void main(){
    float basicSalary, HRA, DA, grossSalary;
    printf("Enter basic salary:");
    scanf("%f", &basicSalary);
    if(basicSalary>=10000){
        HRA=0.20*basicSalary;
        DA=0.80*basicSalary;
    }
    else if(basicSalary>=20000){
        HRA=0.25*basicSalary;
        DA=0.90*basicSalary;
    }
    else if(basicSalary>=30000){
        HRA=0.30*basicSalary;
        DA=0.95*basicSalary;
    }
    else{
        printf("Invalid basic salary. Please input a value graeter than or equal to 10000.");
    }
    grossSalary=basicSalary+HRA+DA;
    printf("gross salary=%f", grossSalary);
}