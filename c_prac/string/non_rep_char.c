#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("enter the string\n");
    fgets(str,sizeof(str),stdin);
    int len = strlen(str);
    int count=1;
     str[strcspn(str, "\n")] = '\0';
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(i!=j){
                if(str[i]==str[j]){
                    count++;
                }
            }

        }
        if(count==1){
            printf("first non repeating char is %c\n",str[i]);
            return 0;
        }
        count=1;
    }

}
