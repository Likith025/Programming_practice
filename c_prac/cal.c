#include<stdio.h>
int main(){
    int num1,num2;
    char sig;
    printf("enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    getchar();
    printf("enter a oprand\n");
    scanf("%c",&sig);
    switch (sig)
    {
    case '+':

        printf("%d %c %d = %d",num1,sig,num2,(num1+num2));
        break;
    case '-':
        printf("%d %c %d = %d",num1,sig,num2,(num1-num2));
        break;
    case '*':
        
        printf("%d %c %d = %d",num1,sig,num2,(num1*num2));
        break;
    case '%':
        
        printf("%d %c %d = %d",num1,sig,num2,(num1%num2));
        break;
    case '/':

        if(num2==0){
            printf("division by 0 not possible\n");

        }else{
        printf("%d %c %d = %d",num1,sig,num2,(num1/num2));
        }
        break;
    default:
        printf("enter a proper operation\n");
        break;
    }
    return 0;
}