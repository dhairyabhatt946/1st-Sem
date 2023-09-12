#include<stdio.h>

void main(){
	float side1, side2, side3;
	printf("Enter three sides of triangle:");
	scanf("%f %f %f", &side1, &side2, &side3);
	if(side1==side2 && side1==side3 && side2==side3){
		printf("Equilateral triangle");
	}
	else if(side1==side2 || side1==side3 || side2==side3){
		printf("Isosceles triangle");
	}
	else if(side1*side1==(side2*side2)+(side3*side3) || side2*side2==(side1*side1)+(side3*side3) || side3*side3==(side1*side1)+(side2*side2)){
		printf("Right angled triangle");
	}
	else{
		printf("Scalen triangle");
	}
}
