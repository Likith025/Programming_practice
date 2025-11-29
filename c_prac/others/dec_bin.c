#include<stdio.h>
#include<string.h>
#include<math.h>
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


void bin_dec(char*bin){
    int dec=0;
    int len=strlen(bin);
    for(int i=0;i<=len;i++){
        if(bin[i]=='1'){
            dec += (1 << (len - i - 1));
        }
    }
    printf("%d \n",dec);

}


int main(){
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    if(num<=0){
        printf("enter positive number only\n");

    }
    dec_bin(num);
    bin_dec("11101");
    return 0;
}