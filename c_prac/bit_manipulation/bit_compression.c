#include <stdio.h>
#include <stdint.h>

// Extract only the bits from even-numbered positions in a 16-bit number
// Reconstruct the original 8-bit value

uint8_t compress_bits(uint16_t val) {
    // Your logic here
    uint8_t res=0;
    uint8_t i=0;
    uint8_t ch=0;
    while(i<16){
        ch=(val>>14-i)&(1);
        res=(res<<1)|ch;
        i=i+2;
      

    }
    return res;
    
}

int main() {
    uint16_t val;
    scanf("%hu", &val);

    uint8_t result = compress_bits(val);
    printf("%u", result);
    return 0;
}