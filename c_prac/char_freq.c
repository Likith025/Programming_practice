#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[100];
    int i=0;
    int count=1;
    printf("enter a string\n");
    fgets(str,sizeof(str),stdin);
    printf("%s",str);
   for(int i=0;i<strlen(str);i++){
        for(int j=0;j<strlen(str);j++){
            if(j!=i){
                if(str[j]=='\0')
                    continue;
                if(str[i]==str[j]){
                    count++;
                    //str[j]='\0';
                }
            }
        }
        printf("%c appeared %d times \n",str[i],count);
        count=1;
   }

}
