#include<stdio.h>
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
    printf("enter the size of unsorted array\n");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    printf("\narray before sorting\n");
    print_arr(size,arr);
    bubble_sort(size,arr);
    printf("\narray after sorting\n");
    print_arr(size,arr);


    return 0;
}