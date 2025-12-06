// Your task is to extract a 5-bit field located at bit positions 10 to 14 from a 32-bit register value. 

// If this field’s value is less than 31, increment it by 1. Then write the updated value back to the same bit positions in the register, leaving all other bits unchanged.

// Use only bitwise operations to extract, modify, and update the register.

#include <stdio.h>
#include <stdint.h>

uint32_t update_register(uint32_t reg) {
    // Your logic here
    uint32_t val=0;
    val=(reg&0x7c00)>>10;
    if(val<31){
        val++;
    }
    reg=reg&~(31<<10);
    reg=reg|(val<<10);

    return reg ;
}

int main() {
    uint32_t reg;
    scanf("%u", &reg);
    uint32_t updated = update_register(reg);
    printf("%u", updated);
    return 0;
}