
#include <stdint.h>

int main(void)
{
    uint32_t volatile *rcc_ahb1 = (uint32_t*) 0x40023830;
    uint32_t volatile *gpiob_moder = (uint32_t*) 0x40020400;
    uint32_t volatile *gpiob_odr = (uint32_t*) 0x40020414;
    uint32_t volatile *gpioc_moder = (uint32_t*) 0x40020800;
    uint32_t volatile *gpioc_idr = (uint32_t*) 0x40020810;


    volatile uint8_t button_status;

    // Enable GPIOB and GPIOC clocks
    *rcc_ahb1 |= (3 << 1); // Bit 1 for GPIOB, Bit 2 for GPIOC

    // Set PB14 as output
    *gpiob_moder &= ~(3 << 28);
    *gpiob_moder |=  (1 << 28);

    // Set PC13 as input
    *gpioc_moder &= ~(3 << 26);


    while (1)
    {
        button_status = (uint8_t)((*gpioc_idr >> 13) & 0x1);

        if (button_status)  // Active-low button press
        {
            *gpiob_odr |= (1 << 14);  // LED ON
        }
        else
        {
            *gpiob_odr &= ~(1 << 14); // LED OFF
        }
    }
}
