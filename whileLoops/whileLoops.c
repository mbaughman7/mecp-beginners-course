#include <stdint.h>
#include <stdio.h>

int main(void)
{
	int32_t firstNum, secondNum;
	printf("enter two numbers\n");

	if (scanf("%d %d", &firstNum, &secondNum) == 0){
		printf("you entered an invalid character\n");
	}
	else{
	uint32_t counter = 0;
	while(firstNum <= secondNum){
		if(firstNum % 2 == 0){
		printf("%d\t", firstNum);
		counter++;
		}
		firstNum ++;
	}
	printf("\nALL DONE.  There were %d even numbers\n", counter);
	}
}
