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
           // printf("Row base address = %p\n", arr);
        }
        printf("Row base address = %p\n", arr);

    }
    return arr;
}

int** create_2d_arr(int rows,int col){
    int **arr = (int**) malloc(rows*(sizeof(int*)));
    for(int i=0;i<rows;i++){
        arr[i]=arr_read(col);
        printf("&arr[%d] = %p   arr[%d] = %p\n", i, &arr[i], i, arr[i]);
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
void free_2d_arr(int** arr,int row){
    for(int i=0;i<row;i++){
        free(arr[i]);

    }
    free(arr);
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
    free_2d_arr(arr,rows);
    return 0;
}