#include<stdio.h>

void main(){
	int i,j,a=1;
	for(i=1;i<=5;i++){
		for(j=1;j<=5-i;j++){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			if(j%2==1){
				printf("%d",a);
				a++;
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
		a=1;
	}
}
