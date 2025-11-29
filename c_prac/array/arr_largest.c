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

int find_largest(int* arr,int len){
    int largest=arr[0];
    int temp;
    for(int i=1;i<len;i++){
        if(largest<arr[i]){
            temp=largest;
            largest=*arr;
            *arr=temp;
        }
    }
    return largest;
}

int main(){
    int len;
    int* arr;
    int large;
    printf("enter the legth of the array \n");
    scanf("%d",&len);
    arr=arr_read(len);
    large=find_largest(arr,len);
    printf("the largest number in the array is %d \n",large);
    return 0;

}
