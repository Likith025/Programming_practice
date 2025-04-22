#include<stdio.h>
int main(){
    int arr[]={1,2,1,3,2,4,4,5,4,3,2};
    int n;
    n=sizeof(arr)/sizeof(int);
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;){
            if(arr[i]==arr[j]){
                for(int k=j;k<n;k++){
                    arr[k]=arr[k+1];
                }
                n--;
            }
            else
                j++;
        }
    }
    printf("replaced rep with 0\n");
    for(int i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
}