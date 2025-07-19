#include<stdio.h>
#include<string.h>

int check_for_digits(char*);

int main(){
    char str[100];
    printf("enter the string to check\n");
    scanf("%s",str);
    if(check_for_digits(str)){
        printf("%s string has only digits \n",str);
    }
    else{
        printf("%s has other char also\n",str);
    }
    return 0;
}

int check_for_digits(char* str){
    int flag=0;
     for(int i=0;i<strlen(str);i++){
        if(str[i]<='0'|| str[i]>='9'){
            
            return flag;
        }
        flag=1;
    }
    return flag;
}