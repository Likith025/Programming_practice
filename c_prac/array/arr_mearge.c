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

int* arr_mearge(int* arr_1,int* arr_2,int len_1,int len_2){
    int* result;
    for(int i=0;i<=(len_1+len_2);i++){
    if(*arr_1<=*arr_2){
        *result=*arr_1;
        arr_1++;
        result++;
    }
    else{
        *result=*arr_2;
        arr_2++;
        result++;

    }
}
    return result;
}

void arr_print(int *arr, int size)
{
    printf("printing array\n");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int main(){
    int*arr_1;
    int* arr_2;
    int* res;
    int len_1,len_2;
    printf("enter the length of arrays \n");
    scanf("%d %d",&len_1,&len_2);
    arr_1=arr_read(len_1);
    arr_2=arr_read(len_2);
    res=arr_mearge(arr_1,arr_2,len_1,len_2);
    arr_print(res,len_1+len_2);

}