/*
 * main.c
 *
 *  Created on: Apr 5, 2024
 *      Author: marshall
 */
#include <stdio.h>

long long int g_beans = 0xAABCFF0102F31111;

int main(void){



char* address1 = &g_beans;

printf("what value is here?: %lx\n", *address1 );

char* typeCastAddress = (char*) &g_beans;

printf("what about after i typecast it?: %lx\n", *typeCastAddress);

long long int* correctTypePointer = &g_beans;

printf("this should be the whole value: %lx\n", *correctTypePointer);

return 0;

}


