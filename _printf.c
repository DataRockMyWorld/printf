#include "main.h"


/**
* _printf - Writes output to std output
* @format: input in string format.
* Return: 0 on success.
*/

int _printf(const char *format, ...)
{
	int count;

	va_list membs;

	va_start(membs, format);

	if (format == NULL)
		return (-1);

	count = 0;

	for (; *format != '\0'; format++)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				output_c('%');
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
			output_c(*format);
			count++;
		}
	}
	va_end(membs);
	return (count);
}
