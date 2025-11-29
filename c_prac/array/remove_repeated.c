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


int remove_repeated(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; ) {
            if (arr[i] == arr[j]) {
                // Shift all elements left
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--;
            } else {
                j++;
            }
        }
    }
    return size;
}

int main(){
    int *arr;
    int size;
    printf("enter the size of array\n");
    scanf("%d",&size);
    arr=arr_read(size);
    size=remove_repeated(arr,size);
    arr_print(arr,size);
    free(arr);
    return 0;
}
    