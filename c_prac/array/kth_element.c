#include <stdio.h>
#include <stdint.h>
void kth_largest_smallest(uint8_t*arr,int n,int k);

int main(){
        uint8_t arr[10]={12,43, 74 ,35,58 ,33,15,7,78,99};
        int k=3;
        kth_largest_smallest(arr,10,2);



}

void kth_largest_smallest(uint8_t* arr,int n,int k){
    int min=0;
    int max=0;
    int k_min=-1;
    int k_max=256;
    if(k==0||n==0||k>n){
        printf("invalid inputs\n");
        return;
    }
    for(int i=0;i<k;i++){
        max=-1;
        min=256;
        for(int j=0;j<n;j++){
            if(arr[j]>k_min&& arr[j]<min){
                min=arr[j];
            }
            if(max<arr[j]&&k_max>arr[j]){
                max=arr[j];
            }

        }
        k_min=min;
        k_max=max;

    }
    printf("%dth max is %d and %dth min is %d \n",k,k_max,k,k_min);

}