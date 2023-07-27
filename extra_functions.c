#include "main.h"

/**
 * print_reverse - Print the string in reverse
 * @s: character input
 *
 * Return: Always 0
 */
int print_reverse(char *s)
{
	int i, count;
	char y;

	if (s == NULL)
		return (-1);

	for (i = 0; s[i]; i++)
		;

	for (i = i - 1; i >= 0; i--)
	{
		y = s[i];
		output_c(y);
		count++;
	}
	return (count);
}


/**
 * print_rot - string
 * @s: character input
 *
 * Return: Always 0
 */
int print_rot(char *s)
{

	char start[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char end[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char k;
	unsigned int i, j;
	int count;

	if (s == NULL)
	return (-1);

	for (i = 0; s[i]; i++)
	{
		for (j = 0; start[j]; j++)
		{
			if (start[j] == s[i])
			{
				k = end[j];
				output_c(k);
				count++;
				break;
			}
		}
		if (!start[j])
		{
			k = s[i];
			output_c(k);
			count++;
		}
	}
	return (count);
}
/**
 * print_flag - return int associated with flag
 * @c: flag type
 *
 * Return: int
 */
int print_flag(int c)
{
	int a = 0;

	if (c == '+')
		a = 1;
	if (c == '#')
		a = 2;
	if (c == ' ')
		a = 3;
	if (c == '-')
		a = 4;
	return (a);
}
/**
 * add_flag - used for non-custom converion specifiers
 * @f: result from print_flag
 * @format: flag type
 * @membs: argument
 *
 * Return: count
 */
int add_flag(int f, char format, va_list membs)
{
	int count = 0, v = va_arg(membs, int);

	if (f == 1)
	{
		if (format == 'd' && v > 0)
		{
			count += output_c('+');
			count += print_int(v);
		}
		else if (format == 'd' && v < 0)
			count += print_int(v);
	}
	else if (f == 2)
	{
		count += output_c('0');
		if (format == 'x')
		{
			count += output_c('x');
			count += print_x(v);
		}
		else if (format == 'X')
		{
			count += output_c('x');
			count += print_capx(v);
		}
		else if (format == 'o')
			count += print_o(v);
	}
	else if (f == 3)
	{
		if (format == 'd' && v > 0)
		{
			count += output_c(' ');
			count += print_int(v);
		}
		else if (format == 'd' && v < 0)
			count += print_int(v);
	}
return (count);
}
