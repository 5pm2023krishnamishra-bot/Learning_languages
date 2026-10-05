// finfing mminimum of 2 using ternary operator.
#include <stdio.h>

void main(){
    int a,b;
    printf("enter the two numbers : \n");
    scanf("%d",&a);
    scanf("%d",&b);
    (a>b)?printf("%d > %d \n",a,b):printf("%d < %d\n",a,b);
}