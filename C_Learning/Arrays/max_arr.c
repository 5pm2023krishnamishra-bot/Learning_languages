#include <stdio.h>
#include <conio.h>

void main(){
    int size;
    int i;
    int max=0;
    printf("enter the size: \n");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
        printf("enter the element \n");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("max=%d",max);
}