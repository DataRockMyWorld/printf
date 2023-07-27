#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

	void *addr;
	unsigned int ui;

	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;

	_printf("Unsigned octal:[%o]\n", ui);
	_printf("Address:[%p]\n", addr);
	_printf("Negative:[%d]\n", -762534);
	_printf("Negative:[% d]\n", 762534);
	_printf("Negative:[%+d]\n", 762534);
	_printf("Negative:[%#x]\n", 762534);
	_printf("Negative:[% d]\n", -762534);
	return (0);
}
