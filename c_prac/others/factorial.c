#include<stdio.h>
int main(){
    int num,fact=1;
    printf("enter the number to find factorial\n ");
    scanf("%d",&num);
    if(num==0||num==1){
        printf("num is 0 or 1\n");
        fact=1;
    }
    else{
        for (int i=num;i>=1;i--){
            fact=fact*i;
        }
    }
    printf("factorial of %d is %d",num,fact);

    return 0;
}