#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[100];
    int i=0;
    int count=1;
    printf("enter a string\n");
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    printf("%s",str);
    str[strcspn(str, "\n")] = '\0';
   for(int i=0;i<len;i++){
        if(str[i]=='\0')
                    continue;
        for(int j=0;j<len;j++){
            if(j!=i){
                if(str[i]==str[j]){
                    count++;
                    str[j]='\0';
                }
            }
        }
        printf("%c appeared %d times \n",str[i],count);
        count=1;
   }

}
