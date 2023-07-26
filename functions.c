#include "main.h"

/**
 * get_spec - Get the specifier required
 * @spec: specifier
 * @membs: pointer to arguments
 * Return: Always 0
 */
int get_spec(char spec, va_list membs)
{
	int count;

	count = 0;
	if (spec == 'c')
		count += print_char(va_arg(membs, int));
	else if (spec == 's')
		count += print_str(va_arg(membs, char *));
	else if (spec == 'd' || spec == 'i')
		count += print_int(va_arg(membs, int));
	else if (spec == 'b')
		count += print_bin(va_arg(membs, unsigned int));
	else if (spec == 'u')
		count += print_u(va_arg(membs, unsigned int));
	else if (spec == 'o')
		count += print_o(va_arg(membs, unsigned int));
	else if (spec == 'x')
		count += print_x(va_arg(membs, unsigned int));
	else if (spec == 'X')
		count += print_capx(va_arg(membs, unsigned int));
	else if (spec == 'S')
		count += print_capstr(va_arg(membs, char *));
	else if (spec == 'r')
		count += print_reverse(va_arg(membs, char *));
	else if (spec == 'R')
		count += print_rot(va_arg(membs, char *));
	return (count);
}

/**
 * print_char - Get the specifier required
 * @c: character
 *
 * Return: Always 0
 */

int print_char(int c)
{
	return (output_c(c));
}

/**
 * print_str - Function prints spring
 * @s: string input
 *
 * Return: Always 0
 */

int print_str(char *s)
{
int count = 0;
if (s == NULL)
	return (-1);
for (; *s != '\0'; s++)
{
count += output_c(*s);
}
return (count);
}

/**
 * print_int - Print an Integer
 * @num: integer input
 *
 * Return: Always 0
 */

int print_int(int num)
{
	int count, i, j;
	char buffer[32];

	count = 0;

	if (num == 0)
	{
		output_c('0');
		return (1);
	}

	if (num < 0)
	{
		output_c('-');
		count++;
		num = -num;
	}

	i = 0;

	do {
		buffer[i++] = '0' + (num % 10);
		num = num / 10;
		count++;
	} while (num > 0);

	for (j = i - 1; j >= 0; j--)
	{
		output_c(buffer[j]);
	}
	return (count);
}

/**
 * output_c - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int output_c(char c)
{
	return (write(1, &c, 1));
}
