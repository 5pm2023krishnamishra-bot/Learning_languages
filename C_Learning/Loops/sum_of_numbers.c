#include <stdio.h>

// programme to calculate sum of digits of a number.
void main(){
    int n,r;
    printf("enter the no. : \n");
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        r=n%10;
        sum+=r;
        n/=10;
    }
    printf("sum of numbers = %d",sum);
}