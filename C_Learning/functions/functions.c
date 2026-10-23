#include <stdio.h>
#include <conio.h>

int add(int a,int b){
     a=5;
     b=10;
    int c=a+b;
    return c;
}
int sub(int a,int b){
     a=5;
     b=10;
    int c=b-a;
    return c;
}
int multi(int a,int b){
     a =5;
     b=10;
    int c=a*b;
    return c;
}
int div(int a,int b){
     a=5;
     b=10;
    float c=b/a;
    return c;
}
void main(){
    int a,b;
    printf("enter two integers : \n");
    scanf("%d",&a);
    scanf("%d",&b);
    int x1=add(a,b);
    int x2=sub(a,b);
    int x3=multi(a,b);
    int x4=div(a,b);
    printf("%d,%d,%d,%d \n",x1,x2,x3,x4);
}