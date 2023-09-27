#include<stdio.h>

void main(){
	int i,j,m=0;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			if(m==0){
				m=1;
			}
			else{
				m=0;
			}
			printf("%d",m);
		}
		printf("\n");
	}
}
