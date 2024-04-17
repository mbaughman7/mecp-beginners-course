#include<stdio.h>
#include<stdint.h>


int main(void)
{
	uint32_t a, b;
	printf("Enter two numbers separated by a space.\n");
	if (scanf("%d %d", &a, &b) == 0){
		printf("you entered an invalid character.  try again");
	}
	else{
	printf("BITWISE (&): %d\n",(a & b));
	printf("BITWISE (|): %d\n",(a | b));
	printf("BITWISE (~): %d\n",(~a));
	printf("BITWISE (^): %d\n",(a ^ b));
	}
}

/*
 * This program will still allow for the entering of a float, which will break the program.
 * In previous lectures, this was handled by taking a float as the input then converting to an int.
 * For bitwise operators, that's not going to work.
 */
