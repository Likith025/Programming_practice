#include<stdio.h>
#include<string.h>
#include<ctype.h>


int anagram_check(char *str_1,char *str_2){
    int char_freq_1[26]={0};
    int char_freq_2[26]={0};

    
    if(strlen(str_1)!=strlen(str_2)){
        printf("both words are not anagram case 1\n");
        return 0;
    }
    for(int i=0;i<strlen(str_1);i++){
        char_freq_1[str_1[i]-'a']++;
        char_freq_2[str_2[i]-'a']++;
    }

    for(int j=0;j<26;j++){
        if(char_freq_1[j]!=char_freq_2[j]){
            printf("both words are not anagram \n");
            return 0;
        }

    }
    
    printf("both are anagram\n");


}
void anagram_check_2(char* str_1,char* str_2){
    int arr[256]={0};

    if(strlen(str_1)!=strlen(str_2))
    {
        printf("lengths of the string does not match \n");
        return;
    }

    for(int i=0)
    

}


int main(){
    char str_1[50];
    char str_2[50];
    printf("enter the 1st word\n");
    scanf("%s",str_1);
    printf("enter the 2nd word\n");
    scanf("%s",str_2);
    anagram_check(str_1,str_2);


}