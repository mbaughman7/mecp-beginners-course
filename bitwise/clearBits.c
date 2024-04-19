#include<stdio.h>
#include<stdint.h>



/*
 * the purpose of this exercise is to clear the 4th, 5th, and 6th bits of a number.
 * in order to do that, we use the bitwise AND (&) operator and a mask
 * with the binary value of 11000111.  In decimal, that is 199.
*/
uint32_t myNum;
uint32_t mask = 199;
int main(void)
{
	printf("enter a number\n");
	scanf("%d", &myNum);
	uint32_t result = myNum & mask;
	printf("%d AND the mask of 199 equals %d", myNum, result);
}

