#include<stdio.h>
void str_len(char*str){
    int count=0;
     while (*str!='\0')
    {
        count++;
        str++;
    }
    printf("string length using pointer %d \n",count);
}

int main(){
    char str[50];
    int count=0;
    printf("enter a string to find its len\n");
    scanf("%s",str);
    str_len(str);
    while (str[count]!='\0')
    {
        count++;
    }
    printf("string length using loops %d \n",count);
}