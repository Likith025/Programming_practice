
#include <stdint.h>


int main(void)
{
	//LED is connected to PB14
	//button is connected to PC13
	uint32_t *pclk= (uint32_t*) 0x40023830;// this is the address rcc reg for AHB1
	uint32_t *pGPIOB_mode=(uint32_t*)0x40020400;// address of MODER reg of port b
	uint32_t *pGPIOB_op=(uint32_t*)0x40020414;// address of output reg of port b
	uint32_t *pGPIOC_mode= (uint32_t*) 0x40020800;//address of moder reg of port c
	uint32_t *pGPIOC_in=(uint32_t*) 0x40020810;// address of input reg of port c
	volatile uint8_t button_status;
	*pclk=*pclk|(3<<1);// setting up rcc for GPIO B and C

	*pGPIOB_mode=*pGPIOB_mode &~(3 << (28));//Resetting MODER reg for port B
	*pGPIOB_mode=*pGPIOB_mode |(1<<28);//Setting MODER reg for port B

	*pGPIOC_mode=*pGPIOC_mode &~(3<<26);//resetting moder reg is same as setting as input



    while (1){

    	button_status=	(uint8_t)((*pGPIOC_in)&(1<<13));
    }
}