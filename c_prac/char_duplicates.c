#include<stdio.h>
#include<string.h>

int main(){
    int char_count[256]={0};
    char str[100];
    printf("enter the string to check for duplicate characters\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';

    for(int i=0;i<=strlen(str);i++){
        char_count[str[i]]++;
    }

    printf("printing the duplicate char\n");
    for(int i=0;i<256;i++){
        if(char_count[i]>1){
            printf("%c \t",i);
            
        }
        
    }
}