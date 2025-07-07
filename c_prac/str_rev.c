#include<stdio.h>
#include<string.h>
void str_rev(char* src_str){
    char* start=src_str;
    char* end=src_str+strlen(src_str)-1;
    char temp;
    while(start<end)
    {
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    printf("swapping using pointers %s\n",src_str);

}


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
     str_rev(str);
    printf("after swapping using loops %s\n",rev_str);
    
    if(!strcmp(str,rev_str))
    {
        printf("%s is a palindrome\n",str);
    }
    printf("not a palindrome\n");
}