#include <stdio.h>
#include <conio.h>

int main(){
    int n;
    printf("enter your marks : \n");
    scanf("%d",&n);
    if(n<0||n>100){
        printf("invalid");
    }
    else if(n>=90){
        printf("Grade = A");
    }
    else if(n>=80){
        printf("Grade =B");
    }
    else if (n>=70){
        printf("Grade = C");
    }
    else if(n>=60){
        printf("Grade = D");
    }
    else{
        printf("Grade = F");
    }
    return (0);
}