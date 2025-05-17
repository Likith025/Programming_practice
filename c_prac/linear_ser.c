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

void arr_print(int *arr, int size)
{
    printf("printing array\n");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void linear_search(int * arr,int size,int key){
    int found=0;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            printf("%d is found at %dth position\n",key,i+1);
            found=1;
        }

    }
    if(!found){
    printf("%d is not found\n",key);
    }
    
}


int main(){
    int *arr;
    int size,key;
    printf("enter the size of array\n");
    scanf("%d",&size);
    printf("enter the key to find\n");
    scanf("%d",&key);
    arr=arr_read(size);
    arr_print(arr,size);
    linear_search(arr,size,key);
    free (arr);
    
}