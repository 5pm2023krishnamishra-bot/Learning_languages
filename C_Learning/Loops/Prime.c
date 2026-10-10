#include <stdio.h>

void main(){
    int n,i;
    printf("enter the number : \n");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            printf("not a prime");
            break;
        }
    }
    if(n==i){
        printf("it is a prime");
    }
}