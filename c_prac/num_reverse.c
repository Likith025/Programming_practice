#include<stdio.h>
int main(){
    int num,rev_num=0,temp;
    printf("enter the number to reverse\n");
    scanf("%d",&num);
    temp=num;
    while(temp>0){
        rev_num=(rev_num *10)+(temp%10);
        temp=temp/10;
    }
    printf("number entered is %d and reversed to %d\n",num,rev_num);
    return 0;
}