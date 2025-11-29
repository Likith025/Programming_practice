#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

void str_cpy(int length,char *str_src,char *str_des){
    int i=0;
    for(i=0;str_src[i]!='\0';i++){
        str_des[i]=str_src[i];
    }
    str_des[i] = '\0';
    printf("printing from destination string\n");
    printf("%s",str_des);
}

int main(){
    printf("enter the length of string\n");
    uint8_t length;
    scanf("%u",&length);
    char *str_1= (char*) malloc(length*sizeof(char));
    char *str_2=(char*) malloc (length*sizeof(char));
    printf("enter the string to copy\n");
    scanf("%s",str_1);
    str_cpy(length,str_1,str_2);
    free(str_1);
    free(str_2);
}