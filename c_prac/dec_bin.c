#include<stdio.h>
void dec_bin(int num){
    int bin[32];
    int started=0;
    for(int i=0;i<32;i++){
        bin[i]=num%2;
        num=num/2;
    }
    for(int j=31;j>=0;j--){
        if(bin[j]==1){
            started=1;
        }
        if(started){
        printf("%d\t",bin[j]);
        }
    }
}


int main(){
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    dec_bin(num);
    return 0;
}