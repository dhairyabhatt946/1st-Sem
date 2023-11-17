#include<stdio.h>

char findChar(char [1000], char );
void main(){
    char s1[1000], chr;
    printf("Enter the string: ");
    gets(s1);
    printf("Which character do you want to find: ");
    scanf("%c", &chr);
    char res=findChar(s1, chr);
    if(res=='a'){
        printf("Character not found");
    }
    else{
        printf("%c", res);
    }
}
char findChar(char s1[1000], char chr){
    int i;
    char target='a';
    for(i=0;s1[i]!='\0';i++){
        if(s1[i]==chr){
            target=s1[i];
        }
    }
    return target;
}