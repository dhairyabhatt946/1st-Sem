#include<stdio.h>
#include<string.h>

void main(){
    char s1[1000], s2[1000];
    printf("Enter the string 1: ");
    gets(s1);
    printf("Enter the string 2: ");
    gets(s2);
    char s3[1000], s4[1000];
    strcpy(s3, s1), strcpy(s4, s2);
    printf("Length of string 1: %d\n", strlen(s1));
    printf("Length of string 2: %d\n", strlen(s2));
    if(strcmp(s1, s2)==0){
        printf("Both strings are same\n");
    }
    else{
        printf("Both strings are different\n");
    }
    printf("string 1: %s\n", strcpy(s1, s2));
    strcpy(s1, s3);
    printf("String 1: %s\n", strcat(s1, s2));
    strcpy(s1, s3);
    printf("Reverse string 1: %s\n", strrev(s1));
    printf("Reverse string 2: %s\n", strrev(s2));
    strcpy(s1, s3), strcpy(s2, s4);
    printf("%s\n", strlwr(s1));
    printf("%s\n", strlwr(s2));
    strcpy(s1, s3), strcpy(s2, s4);
    printf("%s\n", strupr(s1));
    printf("%s\n", strupr(s2));
    strcpy(s1, s3), strcpy(s2, s4);
}