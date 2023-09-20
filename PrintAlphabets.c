#include<stdio.h>

void main(){
	char ch1='A', ch2='a';
	while(ch1>='A' && ch1<='Z'){
		printf("%c ", ch1);
		ch1++;
	}
	while(ch2>='a' && ch2<='z'){
		printf("%c ", ch2);
		ch2++;
	}
}
		
