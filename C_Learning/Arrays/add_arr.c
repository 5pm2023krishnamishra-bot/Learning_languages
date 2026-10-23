#include <stdio.h>
#include <conio.h>

void main(){
    int sum=0;
    int arr[5];
    int i;
    for(i=0;i<5;i++){
        printf("enter the element\n");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        printf("arr[%d]=%d ",i,arr[i]);
    }
    printf("\n");
    for(i=0;i<5;i++){
        sum+=arr[i];
    }
    printf("sum=%d\n",sum);
    
}