

#include <stdint.h>
#include <stdio.h>

uint32_t *pCCR = (uint32_t*) 0x40023830; //enable bit 3 (mask 1000)
uint32_t *pGPIODmode = (uint32_t*) 0x40020C00; //bits 25 and 24 : 0 1
uint32_t *pPin12Output = (uint32_t*) 0x40020C14;


int main(void)
{
	*pCCR = *pCCR | 0x01 << 3;
	*pGPIODmode = *pGPIODmode & 0x00 << 24; //clear bits 24 and 25
	*pGPIODmode = *pGPIODmode | 0x01 << 24; //set the 24th bit
	*pPin12Output = *pPin12Output | 0x01 << 12;
    while(1);
}
