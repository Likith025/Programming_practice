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

int** create_2d_arr(int rows,int col){
    int **arr = (int**) malloc(rows*(sizeof(int)));
    for(int i=0;i<rows;i++){
        arr[i]=arr_read(col);
    }
    return arr;
}

void print_2d_arr(int** arr,int rows,int col){
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int** arr;
    int rows,col;
    printf("enter the number of rows\n");
    scanf("%d",&rows);
    printf("enter the number of col\n");
    scanf("%d",&col);
    arr= create_2d_arr(rows,col);
    print_2d_arr(arr,rows,col);
}