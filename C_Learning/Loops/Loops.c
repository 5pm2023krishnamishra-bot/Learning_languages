#include <stdio.h>
#include <conio.h>

void main(){
    int n,r;
    int sum=0;
    printf("enter the number to check : \n");
    scanf("%d",&n);
    int num=n;
    while(n!=0){
        r=n%10;
        sum+=r*10 ;
        n/=10;
    }
    if(num==n){
        printf("%d is a Pallindrome . \n",num);
    }
    else{
        printf("%d is not a pallindrome \n",num);
    }
}