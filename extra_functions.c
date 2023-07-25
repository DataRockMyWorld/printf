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
