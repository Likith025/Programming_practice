#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main(){

    char str[50];
    char temp;
    int v_count=0,c_count;
    printf("enter a string\n");
    scanf("%s",str);
    for(int i=0;i<strlen(str);i++){
        temp=toupper(str[i]);
        if(isalpha(temp)){
            if(temp=='A'||temp=='E'||temp=='I'||temp=='O'||temp=='U'){
                v_count++;
            }

            else{
                c_count++;
            }
        }
    }
    printf("number of vowels is %d and number of consonents %d\n",v_count,c_count);
}