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
