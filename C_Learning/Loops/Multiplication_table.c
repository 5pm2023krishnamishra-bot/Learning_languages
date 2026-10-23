#include <stdio.h>
#include <conio.h>

void main(){
    int N,i;
    int mul=0;
    printf("enter the number : \n");
    scanf("%d",&N);
    for(i=1;i<=10;i++){
        mul+=N;
        printf("%d*%d=%d\n",N,i,mul);
    }
}
