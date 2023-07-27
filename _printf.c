#include "main.h"
/**
* _printf - Writes output to std output
* @format: input in string format.
* Return: 0 on success.
*/
int _printf(const char *format, ...)
{
	int count, f = 0;

	va_list membs;

	count = 0;

	va_start(membs, format);

	if (format == NULL)
		return (-1);
	for (; *format != '\0'; format++)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				count += output_c('%');
			else if (*format == '\0')
				return (-1);
			else if (*format == ' ')
				return (-1);
			else if (*format == '+' || *format == '#' || *format == ' ')
			{
				f += print_flag(*format);
				format++;
				count += add_flag(f, *format, membs);
			}
			else
				count += get_spec(*format, membs);
		}
		else
			count += output_c(*format);
	}
	va_end(membs);
	return (count);
}
