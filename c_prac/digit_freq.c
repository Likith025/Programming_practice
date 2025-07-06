#include<stdio.h>
#include<string.h>
#include<ctype.h>

void arr_print(int *arr, int size)
{
    printf("printing array\n");
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[10]={0};
    char s[100];
    printf("enter the string\n");
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
        if(isdigit(s[i])){
            arr[s[i]-'0']++;
        }

    }
    arr_print(arr,10);

}