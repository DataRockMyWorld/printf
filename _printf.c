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

	count = 0;

	va_start(membs, format);

	if (format == NULL)
		return (count);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				count += output_c('%');
			}
			else
			{
				count += get_spec(*(format), membs);
			}
		}
		else
		{
			count += output_c(*format);
		}
		format++;
	}

	va_end(membs);
	return (count);
}
