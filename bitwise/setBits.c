#include<stdio.h>
#include<stdint.h>


uint32_t myNum;
/*
 * this exercise is about setting the 4th and 7th bit of a number.
 * in order to do that, we use the bitwise or (|) operator and a mask
 * with the binary value of 01001000.  In decimal, that is 72.
*/
uint32_t mask = 72;
int main(void)
{
	printf("enter a number\n");
	scanf("%d", &myNum);
	uint32_t result = myNum | mask;
	printf("%d OR the mask of 72 equals %d", myNum, result);
}
