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

void print_arr(int size,int* arr){
    for(int i=0;i<size;i++){
        printf("%d \t",arr[i]);
    }

}
void bubble_sort(int size,int *arr){
    int temp;
    for (int i=0;i<size;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
    

}

int main(){
    int size;
    int temp;
    int* arr;
    printf("enter the size of unsorted array\n");
    scanf("%d",&size);
    arr=arr_read(size);
    printf("\narray before sorting\n");
    print_arr(size,arr);
    bubble_sort(size,arr);
    printf("\narray after sorting\n");
    print_arr(size,arr);


    return 0;
}