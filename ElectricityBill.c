#include<stdio.h>

void main(){
    int unit;
    float bill, finalBill;
    printf("Enter an unit:");
    scanf("%d", &unit);
    if(unit<=50){
        bill=unit*0.50;
    }
    else if(unit>50 && unit<=150){
        bill=50*0.50+(unit-50)*0.75;
    }
    else if(unit>150 && unit<=250){
        bill=50*0.50+100*0.75+(unit-150)*1.25;
    }
    else if(unit>250){
        bill=50*0.50+100*0.75+150*1.25+(unit-250)*1.5;
    }
    finalBill=bill*0.20;
    printf("Total electricity bill=%f", finalBill);
}