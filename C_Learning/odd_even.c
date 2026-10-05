#include <stdio.h>

void main(){
    int n;
    printf("enter the number to check : \n");
    scanf("%d",&n);
    if(n%2==0){
        printf("n is even \n");
    }
    else{
        printf("n is odd \n");
    }
}