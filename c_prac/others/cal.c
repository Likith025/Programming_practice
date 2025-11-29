#include<stdio.h>

int main(){
    float num1,num2,ans=0;
    char op,exit='y';
    printf("welcome to cal\n");

    while(exit=='y'){
    printf("enter 1st number \n");
    scanf("%f",&num1);

    printf("enter 2nd number \n");
    scanf("%f",&num2);

    printf("enter oparetion (+,-,*,/) \n");
    scanf(" %c",&op);

    switch (op)
    {
    case '+':
        ans=num1+num2;
        printf("%f %c %f = %f \n",num1,op,num2,ans);

        break;
    
    case '-':
        ans=num1-num2;
        printf("%f %c %f = %f",num1,op,num2,ans);

        break;

    case '*':
        ans=num1*num2;
        printf("%f %c %f = %f",num1,op,num2,ans);

        break;
    
        case '/':
        if(num2==0){
            printf("division by 0 not possible\n");
            break; 
        }
        ans=num1/num2;
        printf("%f %c %f = %f",num1,op,num2,ans);

        break;


    default:
        printf("enter a valid op\n");
        break;
    }

    num1=num2=ans=0;

    printf("press 'y' to continue \n");
    scanf(" %c\n",&exit);
    }

    return 0;
}