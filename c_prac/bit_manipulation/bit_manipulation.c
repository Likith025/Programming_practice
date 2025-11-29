#include <stdio.h>
#include <stdint.h>


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

void set_bit(uint8_t bit_stream){
    uint8_t bit_position;
    printf("enter the bit position to set \n ");
    scanf("%u",&bit_position);
    bit_stream=bit_stream|(1<<bit_position);
    dec_bin(bit_stream);
}

void clear_bit(uint8_t bit_stream){
    uint8_t bit_position;
    printf("enter the bit position to clear \n ");
    scanf("%u",&bit_position);
    bit_stream=bit_stream &  ~(1<<bit_position);
    dec_bin(bit_stream);
}

void toggle_bit(uint8_t bit_stream){
    uint8_t bit_position;
    printf("enter the bit position to toggle \n ");
    scanf("%u",&bit_position);
    bit_stream=bit_stream ^(1<<bit_position);
    dec_bin(bit_stream); 
}

void check_bit_value(uint8_t bit_stream){
    uint8_t bit_position;
    uint8_t bit_value;
    printf("enter the bit position to check \n ");
    scanf("%u",&bit_position);
    bit_value = (bit_stream>>bit_position)&1;
    bit_value==1?printf("bit value is 1\n"):printf("bit value is 0\n");
    dec_bin(bit_stream); 
}




int  main(){

    uint8_t number=0b10101010;
    //set_bit(number);
    //clear_bit(number);
    //toggle_bit(number);
    check_bit_value(number);
    return 0;
}