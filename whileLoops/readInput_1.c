
/*
 * In this program, I will be reading the input of one pin to
 * set the output of another.
 * I will read the input of pin PA0 and set the output of
 * pin PD12.
 *
 * First, I will set the addresses for the input and output pins.
 * Then, in a loop, I will create an if statement like the following:
 * If input pin == HIGH, output pin = HIGH.
 * else output pin = LOW.
*/

#include <stdint.h>

// Addresses for the CCR (different bits for each port)
uint32_t *pCCR = (uint32_t*) 0x40023830;

// Set addresses for output pin (PD12, AKA LED4)
uint32_t *pGPIODmode = (uint32_t*) 0x40020C00;
uint32_t *pPin12Output = (uint32_t*) 0x40020C14;

// Set addresses for input pin (PA0)
uint32_t *pGPIOAmode = (uint32_t*) 0x40020000;
uint32_t *pPin0Input = (uint32_t*) 0x40020010;

int main(void)
{
    // Enable the clock for GPIOA and GPIOD
    *pCCR |= (1 << 3); // GPIOD
    *pCCR |= 1; // GPIOA


    // Configure PD12 as output
    *pGPIODmode &= ~(3 << 24); // Clear bits 24 and 25
    *pGPIODmode |= (1 << 24); // Set the 24th bit

    // Configure PA0 as input mode
    *pGPIOAmode &= ~(3 << 0); // Clear bits 0 and 1

    while (1)
    {
        // Read the pin status of PA0
        uint8_t pinStatus = (uint8_t)(*pPin0Input & 0x1); // Zero out all other bits except bit 0

        if (pinStatus)
        {
            // Turn on the LED (PD12)
            *pPin12Output |= (1 << 12);
        }
        else
        {
            // Turn off the LED (PD12)
            *pPin12Output &= ~(1 << 12);
        }
    }
}
