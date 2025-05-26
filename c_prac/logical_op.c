#include<stdio.h>
int main(){
    int a=0;//1;
    int b=1;//0;
    int c,d;
    c=a||(printf("OR_operation\n")); //in OR operation if 1st oprand is 'non zero' then 2nd oprand is not executed
    d=b&&(printf("AND_operation\n"));//in AND operation if 1st oprand is 'zero' then 2nd oprand is not executed
    printf("%d\n",c);
    printf("%d\n",d);
}