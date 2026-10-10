#include <stdio.h>

void main(){
    int a;
    char c;
    float f1;
    float f2;
    printf("enter an integer : \n");
    scanf("%d",&a);
    printf("enter a character : \n");
    scanf(" %c",&c);
    printf("enter a floating value : \n");
    scanf("%f",&f1);
    printf("enter another float : \n");
    scanf("%2f",&f2);
    printf("a is %d\n",a);
    printf("f1 is %f\n",f1);
    printf("c is %c\n",c);
    printf("f2 is %f\n",f2);
}