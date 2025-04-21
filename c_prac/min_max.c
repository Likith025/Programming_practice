#include<stdio.h>
int main(){
    int arr[10]={0,2,4,6,5,3,4,23,56,8};
    int max=arr[0];
    int min=arr[0];
    for (int i=0;i<10;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    printf("max is %d and min is %d\n",max,min);
}