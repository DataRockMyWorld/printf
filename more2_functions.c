#include "main.h"

/**
 * hex - Print hexadecimal in capital
 * @n: character input
 *
 * Return: Always 0
 */

int hex(int n)
{
int place, count, j = 0;
char hex_values[] = "0123456789ABCDEF";
char hex_array[3];

hex_array[0] = '0';
hex_array[1] = '0';
hex_array[2] = '\0';

place = 0;
count = 0;

while (n > 0)
{
hex_array[place] = hex_values[n % 16];
if (n == 0)
break;
n /= 16;
place++;
}
for (j = 0; j < 2; j++)
{
output_c(hex_array[1 - j]);
count++;
}
return (count);
}

/**
 * print_capstr - Print hexadecimal in capital
 * @c: character pointeer input
 *
 * Return: Always 0
 */

int print_capstr(char *c)
{
int i, count = 0;

for (i = 0; c[i] != '\0'; i++)
{
if ((c[i] > 0 && c[i] < 32) || c[i] >= 127)
{
output_c('\\');
output_c('x');
count += hex(c[i]);
}
else
{
output_c(c[i]);
count++;
}
}
return (count);
}

/**
 * print_storage - Prints the contents of the buffer
 * @storage: Array of chars
 * @index: represents the length.
 */
void print_storage(char storage[], int *index)
{
	int i;

	if (*index > 0)
	{
		for (i = 0; i < *index; i++)
		{
			output_c(storage[i]);
		}
	}

	*index = 0;
}
