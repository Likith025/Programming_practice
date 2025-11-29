#include<stdio.h>


int gcd(int a, int b) {
    int val_a=a,val_b=b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("gcd of %d and %d is %d\n",val_a,val_b,a);
    return a;
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main(){
    int num1,num2;
    printf("enter 2 numbers\n");
    scanf("%d %d",&num1,&num2);
    int lcm_value=lcm(num1,num2);
    printf("%d\n",lcm_value);

    return 0;
}