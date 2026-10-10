#include <stdio.h>

void main(){
    int n,r;
    printf("enter the number : \n");
    scanf("%d",&n);
    int dig=0;
    int num=n;
    while(n!=0){
        r=n%10;
        dig=dig*10+r;
        n/=10;
    }
    if(dig==num){
        printf("it is a pallindrome\n");
    }
    else{
        printf("it is not a pallindrome\n");
    }
}