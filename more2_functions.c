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
if ((c[i] > 0 && c[i] < 32) || (c[i] >= 127))
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

	if (*index > 0)
		write(1, &storage[0], *index);

	*index = 0;
}

/**
 * print_pointer - Print address of string
 * @ptr: character pointeer input
 *
 * Return: Always 0
 */
int print_pointer(void *ptr)
{
	int i, j;
	const char hex[] = "0123456789abcdef";
	int count;
	char array_hex[18];
	uintptr_t home = (uintptr_t)ptr;

	count = 0;

	output_c('0');
	count++;
	output_c('x');
	count++;

	for (i = 15; i >= 0; i--)
	{
		array_hex[i] = hex[home % 16];
		home /= 16;
	}
	array_hex[16] = '\0';

	j = 0;
	while (array_hex[j] == '0' && j < 15)
	j++;

	while (j < 16)
	{
		output_c(array_hex[j]);
		count++;
		j++;
	}
	return (count);
}
