#include <stdio.h>
#include <conio.h>

int fact(int n){
    int val;
    if(n==0||n==1){
        return (1);
    }
    else{
       val=n*fact(n-1);
       return (val); 
    }
}

int main(){
    int num;
    printf("enter the numnber : \n");
    scanf("%d",&num);
    int factorial = fact(num);
    printf("value = %d",factorial);
    return (0);
}