#include <stdio.h>
#include <conio.h>

int fibo(int n){
    int val;
    if (n==0){
        return 0;
    }
    else if(n==1){
        return (1);
    }
    else{
        val =fibo(n-1)+fibo(n-2);
        return val;
    }
}

int main(){
    int i;
    int num;
    printf("enter the num\n");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        printf("%d ",fibo(i));
    }
    return (0);
}