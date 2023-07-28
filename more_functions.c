#include "main.h"

/**
 * print_bin - prints converts number from
 * base 10 to binary
 * @n: unsigned int input
 *
 * Return: binary
 */
int print_bin(unsigned int n)
{
int count = 0;
char num[32];
int c = 0;

if (n == 0)
{
output_c('0');
return (1);
}
while (n != 0)
{
num[c++] = n % 2;
n = n / 2;
count++;
}
for (c = 0; c < count; c++)
{
output_c('0' + num[count - c - 1]);
}
return (count);
}
/**
 * print_u - Get the specifier required
 * @n: character input
 *
 * Return: Always 0
 */
int print_u(unsigned int n)
{
int count = 0;
char num[32];
int c = 0;

if (n == 0)
{
output_c('0');
return (1);
}
while (n != 0)
{
num[c++] = n % 10;
n = n / 10;
count++;
}
for (c = 0; c < count; c++)
{
output_c('0' + num[count - c - 1]);
}
return (count);
}

/**
 * print_o - Get the specifier required
 * @n: character input
 *
 * Return: Always 0
 */
int print_o(unsigned int n)
{
int count = 0;
char num[32];
int c = 0;

if (n == 0)
{
output_c('0');
return (1);
}
while (n != 0)
{
num[c++] = n % 8;
n = n / 8;
count++;
}
for (c = 0; c < count; c++)
{
output_c('0' + num[count - c - 1]);
}
return (count);
}

/**
 * print_x - Get the specifier required
 * @n: character input
 *
 * Return: Always 0
 */
int print_x(unsigned int n)
{
int place, count, j = 0;
char hex_values[] = "0123456789abcdef";
char hex_array[9];

if (n == 0)
{
	output_c('0');
	return (1);
}
hex_array[8] = '\0';
place = 7;
count = 0;

while (n > 0 && place >= 0)
{
hex_array[place] = hex_values[n % 16];
n /= 16;
place--;
}
for (j = place + 1; j < 8; j++)
{
output_c(hex_array[j]);
count++;
}
return (count);
}

/**
 * print_capx - Print hexadecimal in capital
 * @n: character input
 *
 * Return: Always 0
 */
int print_capx(unsigned int n)
{
int place, count, j = 0;
char hex_values[] = "0123456789ABCDEF";
char hex_array[9];

if (n == 0)
{
        output_c('0');
        return (1);
}
hex_array[8] = '\0';

place = 7;
count = 0;

while (n > 0 && place >= 0)
{
hex_array[place] = hex_values[n % 16];
n /= 16;
place--;
}
for (j = place + 1; j < 8; j++)
{
output_c(hex_array[j]);
count++;
}
return (count);
}
