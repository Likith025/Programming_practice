#include<stdio.h>
int main(){
    char str[50];
    int count=0;
    printf("enter a string to find its len\n");
    scanf("%s",str);
    while (str[count]!='\0')
    {
        count++;
    }
    printf("%d",count);
}