#include<stdio.h>

int fibonacci(int a,int b,int stop)
{
    static int  count=2;
    int sum=a+b;
    printf("%d\t",sum);
    count++;
    if(count>=stop){
        return 0;
    }
    return b,fibonacci(b,sum,stop);
}


int main(){

    int num;
    printf("enter the number of value required\n");
    scanf("%d",&num);
    if(num>=1){
    printf("0\t");
    }
    if(num>=2){
        printf("1\t");
        }
    fibonacci(0,1,num);
    return 0;

}