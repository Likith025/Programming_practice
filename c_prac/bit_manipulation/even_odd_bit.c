#include <stdio.h>
int main()
{
    int num;
    printf("enter the number to check\n");
    scanf("%d",&num);
    if(num&0x1){
        printf("number is odd\n");
    }
    else{
        printf("number is even");
    }
}