#include <stdio.h>

void main(){
    int n=5;
    int i;
    for(i=0;i<=5;i++){
        if(i==3){
            continue; //it skips 1 iteration.
        }
        printf("%d",i);
    }
}