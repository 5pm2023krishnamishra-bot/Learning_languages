// Function to swap numbers
#include <stdio.h>

void main(){
    int a;
    int b;
    printf("enter the digits \n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf ("a = %d , b = %d\n",a,b);
    int temp=a;
    a=b;
    b=temp;
    printf ("after swaping a=%d and b=%d \n",a,b);
}
