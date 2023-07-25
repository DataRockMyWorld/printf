#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{


	void *addr;
	char *hey = "Hello There"; 
	addr = (void *)0x7ffe637541f0;

	_printf("Address:[%p]\n", addr);

	printf("Address:[%p]\n", addr);

	_printf("Unknown:[%r]\n", hey);

	_printf("Percent:[%%]\n");

	return (0);
}
