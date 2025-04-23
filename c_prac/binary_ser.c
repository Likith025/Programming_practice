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
void binary_ser(int * arr,int size,int key){
    int low=0;
    int high=size-1;
    int found=0;
    while(low<=high){
        int mid =low+(high-low)/2;
        if(key<arr[mid]){
            high=mid-1;
        }
        else if(key>arr[mid]){
            low=mid+1;
        }
        else{
            printf("key is found at %dth position\n",mid+1);
        
           found=1;
           break;
        }
    }
    if(!found)
    printf("key not found\n");
}


int main(){
    int *arr;
    int size;
    int key;
    printf("enter the size of array\n");
    scanf("%d",&size);
    printf("enter the key to find\n");
    scanf("%d",&key);
    arr=arr_read(size);
    binary_ser(arr,size,key);
    free(arr);

}