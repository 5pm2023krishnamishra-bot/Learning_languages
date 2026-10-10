#include <stdio.h>
#include <math.h>

int count_dig(int n){
    int count=0;
    while(n!=0){
        count++;
        n/=10;
    }
    return count;
}
void main(){
    int n,r;
    printf("enter the number : \n");
    scanf("%d",&n);
    int armstrong=0;
    int num=n;
    int count=count_dig(n);
    while(n!=0){
        r=n%10;
        armstrong=armstrong+ pow(r,count);
        n/=10;
    }
    if (armstrong==num){
        printf("it is a armstrong number : \n");
    }
    else{
        printf("not an armstrong \n");
    }
}