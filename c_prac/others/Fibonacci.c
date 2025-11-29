#include<stdio.h>

int main(){

    int num;
    printf("enter the number of values required \n");
    scanf("%d",&num);
    if(num<0){
        printf("value must be positive\n");
        return 0;
    }
    int fibonacci[num];
    fibonacci[0]=0;
    fibonacci[1]=1;
    for(int i=2;i<num;i++){
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
    }
    for(int j=0;j<num;j++)
    {
        printf("%d\t",fibonacci[j]);
    }
    return 0;
}