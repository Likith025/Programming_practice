#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter a string\n");
    fgets(str,sizeof(str),stdin);
    int i=0,count=0;
    // while(str[i]!='\n'){
    //     printf("%c\t",str[i]);
        
    //     i++;
    // }
    for(int i=0;i<strlen(str);i++){
       if(str[i]=='\0'){
        for(int j=0;j<strlen(str);j++){
            if(str[i]==str[j]){
                count++;
                if(i!=j){
                    str[j]='\0';}
                }

        }
    }
        printf("%c appered %d times\n",str[i],count);
        count=0;
    }

}
