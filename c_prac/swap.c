#include<stdio.h>

void swap_arith(int num1 , int num2){
    num1=num1+num2;
    num2=num1-num2;         
    num1=num1-num2;
    printf("after swapping using arithmatic approach num1=%d and num2=%d\n",num1,num2);

}

void swap_bit(int num1 , int num2){
    num1=num1^num2;
    num2=num1^num2;         //can use ^ in place of +/-
    num1=num1^num2;
    printf("after swapping using bitwise approach num1=%d and num2=%d\n",num1,num2);

}

void swap_bit(int num1 , int num2){
    num1=num1^num2;
    num2=num1^num2;         //can use ^ in place of +/-
    num1=num1^num2;
    printf("after swapping using bitwise approach num1=%d and num2=%d\n",num1,num2);

}

void swap_bit(int num1 , int num2){
    num1=num1^num2;
    num2=num1^num2;         
    num1=num1^num2;
    printf("after swapping using bitwise approach num1=%d and num2=%d\n",num1,num2);

}
int main(){
    int num1,num2;
    printf("enter two numbers to swap\n");
    scanf("%d %d",&num1,&num2);
    printf("before swapping num1 =%d and num2=%d \n",num1,num2);
    swap_arith(num1,num2);
    swap_bit(num1,num2);
    return 0;
}