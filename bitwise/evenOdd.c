#include<stdio.h>
#include<stdint.h>


int main(void)
{
	uint32_t numToCheck;
	printf("Enter a number.  I'll tell you if it's even or odd.\n");
	if (scanf("%d", &numToCheck) == 0){
		printf("you entered an invalid character.  try again");
	}
	else{
		if(numToCheck & 1) printf("it's odd");
		else printf("it's even");
	}
}
