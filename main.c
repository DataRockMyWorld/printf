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
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);

	_printf("%+d\n", 1024);
	_printf("%+d\n", -1024);
	_printf("%+d\n", 0);
	_printf("%+d\n", INT_MAX);
	_printf("%+d\n", INT_MIN);
	_printf("%+d - %+d = %+d\n", 1024, 2048, -1024);
	_printf("%+i - %+i = %+i\n", 1024, 2048, -1024);
	_printf("% d\n", 1024);
	_printf("% d\n", -1024);
	_printf("% d\n", 0);
	_printf("% d\n", INT_MAX);
	_printf("% d\n", INT_MIN);
	_printf("% d - % d = % d\n", 1024, 2048, -1024);
	print_int(INT_MAX);
	return (0);
}
