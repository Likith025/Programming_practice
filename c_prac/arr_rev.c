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
void arr_rev(int* arr,int size){
    int temp;
    for(int i=0;i<(size/2)+1;i++){
        temp=arr[i];
        arr[i]=arr[(size-1-i)];

        arr[(size-i-1)]=temp;
    }
}


int main(){
    int size;
    int * arr;
    printf("enter the size of array \n");
    scanf("%d",&size);
    arr = arr_read(size);
    printf("array before reversal \n");
    arr_print(arr,size);
    arr_rev(arr,size);
    printf("array after reversal\n");
    arr_print(arr,size);
    while(1);

}