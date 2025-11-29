#include<stdio.h>
#include<stdint.h>
uint16_t count_bin_1(uint32_t num){
    int count =0;
    for(int i=0;i<32;i++){
        if((num>>i)&1){
            count++;
        }
        
    }
    if (count==1){
            printf("number %u is a power of 2\n",num);
        }
    return count;

}


int main(){
    uint32_t d_num;
    uint16_t count_1;
    printf("enter a number\n");
    scanf("%u",&d_num);
    count_1= count_bin_1(d_num);
    printf("number of 1's is %u\n",count_1);

}