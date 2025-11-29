#include<stdio.h>
#include<math.h>
int main(){
    int num;
    int isprime =1;
    printf("enter the number to check\n");
    scanf("%d",&num);
    for(int i=2;i<=(sqrt(num));i++){
        if(num%i==0){
            printf("number is not prime\n");
            isprime=0;
            break;
        }
    }
    if(isprime){
    printf("number is prime\n");
    }
    return 0;
}