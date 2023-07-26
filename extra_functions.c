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
