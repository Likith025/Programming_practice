// bit reversal


#include <stdio.h>
#include <stdint.h>

uint8_t reverse_bits(uint8_t val) {
    // Your logic here
    // input b1101 0011
    val=(val<<4)|(val>>4);  //shifiting upper and lower nibble  ---> 0011 1101
    val=((val&0xcc)>>2)|((val&0x33)<<2); // shifting bit pairs  ---> 1100 0111
    val=((val&0xaa)>>1)|((val&0x55)<<1); // shifting individual bits  ---> 1100 1011

    
    return val;
}

int main() {
    uint8_t val;
    scanf("%hhu", &val);

    uint8_t result = reverse_bits(val);
    printf("%u", result);
    return 0;
}