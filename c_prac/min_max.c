#include<stdio.h>
#include<stdlib.h>

int* arr_read(int size){
    int *arr=(int*) malloc(size*sizeof(int));
    if(arr==NULL){
        printf("error in allocating memory\n");

    }
    else{
        printf("enter %d elements for array\n",size);
        for(int i=0;i<size;i++){
            scanf("%d",&arr[i]);
        }
    }
    return arr;
}


int main(){
    int * arr;
    int size;
    printf("enter the size of the array\n");
    scanf("%d",&size);
    arr=arr_read(size);
    int max=arr[0];
    int min=arr[0];
    for (int i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("max is %d and min is %d\n",max,min);
}