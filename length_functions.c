#include "main.h"

/**
 * handle_short - Print the string in reverse
 * @format: character input
 * @membs: Variadic memory
 * Return: Always 0
 */
int handle_short(char format, va_list membs)
{
	int count = 0;

	if (format == 'd' || 'i' || 'u' || 'o' || 'x' || 'X')
	{
		count += (short)get_spec(format, membs);
	}
	return (count);
}


/**
 * handle_long - Print the string in reverse
 * @format: character input
 * @membs: variadic memory
 * Return: Always 0
 */

int handle_long(char format, va_list membs)
{
	int count = 0;

	if (format == 'd' || 'i' || 'u' || 'o' || 'x' || 'X')
	{
		count += (long)get_spec(format, membs);
	}
	return (count);
}
