#include<stdio.h>

void main(){
	int n, i=1, oddCount=0, evenCount=0;
	while(i<=10){
		printf("Enter a number: ");
		scanf("%d", &n);
		if(n%2==0){
			evenCount=evenCount+1;
		}
		else{
			oddCount=oddCount+1;
		}
		i++;
	}
	printf("Odd count=%d \nEven count=%d", oddCount, evenCount);
}
