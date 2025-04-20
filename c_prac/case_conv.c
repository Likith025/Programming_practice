#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    //int arr[50];
    printf("enter a string in lower case\n");
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        if(str[i]>='a'&&str[i]<='z'){
        str[i]=str[i]-32;
        printf("%c",str[i]);
        }
        
    }
}