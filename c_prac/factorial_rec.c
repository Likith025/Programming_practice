#include<stdio.h>
int factorial(int num){
    if(num==0||num==1){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }

}
int main(){

    int num,fact=1;
    printf("enter the number\n");
    scanf("%d",&num);
    fact=factorial(num);
    printf("fcatorial of %d is %d\n",num,fact);
    return 0;
}