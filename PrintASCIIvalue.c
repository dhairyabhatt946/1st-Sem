#include<stdio.h>

void main(){
	char ch1,ch2;
	for(ch1='A';ch1>='A'&&ch1<='Z';ch1++){
		printf("ASCII value of %c=%d\n",ch1,ch1);
	}
	for(ch2='a';ch2>='a'&&ch2<='z';ch2++){
		printf("ASCII value of %c=%d\n",ch2,ch2);
	}
}
