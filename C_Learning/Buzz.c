// checking whether the number is buzz or not .
#include <stdio.h>

void main(){
    int n;
    printf("enter the no. to check : \n");
    scanf("%d",&n);
    if(n%7==0 || n%10==7){
        printf("yes %d is a buzz\n",n);
    }
    else{
        printf("not a  buzz");
    }
}