
#include <stdint.h>
#include <stdio.h>

uint32_t *pCCR = (uint32_t*) 0x40023830; //enable bit 3 (mask 1000)
uint32_t *pGPIODmode = (uint32_t*) 0x40020C00;
uint32_t *pGPIODOutput = (uint32_t*) 0x40020C14;

int main(void)
{
	*pCCR = *pCCR | 0x00000008;
	*pGPIODmode = *pGPIODmode & 0x3FFFFFFF & 0xFCFFFFFF; //clear bits 30, 31, 24, and 25
	*pGPIODmode = *pGPIODmode | 0x40000000 | 0x01000000; //set the 30th bit and 24th bit
	*pGPIODOutput = *pGPIODOutput | 0x8000 | 0x1000; //set pins 12 and 15 to high

    while(1);
}
