#include <stdio.h>

void main(){
    int i=1;
    for(int i=1;i<=5;i++){
        if(i==3){
            continue;
        }
        printf("%d",i);
    }
    printf("\nloop finished!");

}