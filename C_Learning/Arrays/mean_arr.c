#include <stdio.h>
#include <conio.h>

void main(){
    float avg=0;
    int size;
    printf("enter the size of array : \n");
    scanf("%d",&size);
    int arr[size];
    int i;
    for(i=0;i<size;i++){
        printf("enter the element\n");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        printf("arr[%d]=%d ",i,arr[i]);
    }
    printf("\n");
    for(i=0;i<size;i++){
        avg+=arr[i];
    }
    avg/=5;
    printf("avg=%f\n",avg);
    
}