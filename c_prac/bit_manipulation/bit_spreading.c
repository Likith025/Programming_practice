#include <stdio.h>
#include <stdint.h>

uint16_t spread_bits(uint8_t val) {
    // Your logic here
    uint16_t val_16=val;
    val_16=(val_16|(val_16<<4))&(0x0f0f);
    val_16=(val_16|(val_16<<2))&(0x3333);
    val_16=(val_16|(val_16<<1))&(0x5555);
    return val_16;
}

int main() {
    uint8_t val;
    scanf("%hhu", &val);

    uint16_t result = spread_bits(val);
    printf("%u", result);
    return 0;
}