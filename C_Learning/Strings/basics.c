#include <stdio.h>
#include <conio.h>
#include <string.h>

void main(){
    printf("enter the string : \n");
    char st1[200];
    char st[100];
    scanf("%s",st);//inputs string
    printf("%s\n",st);//output of string
    getchar();//consumes \n
    fgets(st1,100,stdin);//inputs string
    puts(st1);//outputs string
    strcpy(st1,st);//copy second string onto first
    puts(st1);
    printf("%d\n",strcmp(st1,st));//returns 0 if first and scond strings are identical
    strcat(st1,st);//returns first string = second+first
    puts(st1);
    printf("size = %d\n",strlen(st1));//returns length of string

}