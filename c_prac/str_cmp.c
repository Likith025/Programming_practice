#include<stdio.h>
#include<string.h>

void str_cmp(char* str_1,char* str_2){
    if(strlen(str_1)!=strlen(str_2)){
        printf("lengths of string are ot equal therefore strings are not same\n");
        return;
    }
    else{
        while(*str_1!='\0'){
            if(!(*str_1==*str_2)){
                printf("strings are not same \n");
                return;
            }
            str_1++;
            str_2++;
        }
        printf("strings are same \n");
    }
}


int main(){
    char str_1[50];
    char str_2[50];
    printf("enter first string \n");
    scanf("%s",str_1);
    printf("enter second string \n");
    scanf("%s",str_2);
    str_cmp(str_1,str_2);

    return 0;

}