#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    char rev_str[50];
    printf("enter a string \n");
    scanf("%s",str);
    
    for(int i=0;i<strlen(str);i++){
        rev_str[strlen(str)-1-i]=str[i];
        //printf("%s",rev_str);
    }
    rev_str[strlen(str)]='\0';
    printf("after swapping %s\n",rev_str);
    if(!strcmp(str,rev_str))
    {
        printf("%s is a palindrome\n",str);
    }
}