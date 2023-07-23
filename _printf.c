#include "main.h"

 /**
 * _printf - Writes output to std output
 * @format: input in string format.
 * Return: 0 on success.
 */

int _printf(const char *format, ...)
{
	int count, i;

	va_list membs;

	va_start(membs, format);

	if (format == NULL)
		return (-1);

	count = 0;
	for (i = 0; *format != '\0'; i++)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				count += get_spec(*(format), membs);
			}
			format++;
		}
		else
		{
			_putchar(*format);
			count++;
			format++;
		}
	}
	va_end(membs);
	return (count);
}
