#include<stdio.h>
#include<string.h>

int main(){
    char str[10]={0};
    int result=0;
    char * p=str;
    printf("enter the string \n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    while(*p!='\0'){
        if(*p>='0'&&*p<='9'){
            result=(result * 10)+(*p-'0');
        }
        
        p++;
    }
    printf("result is %d\n",result);


    return 0;
}