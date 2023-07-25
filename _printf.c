#include "main.h"

#define 

/**
* _printf - Writes output to std output
* @format: input in string format.
* Return: 0 on success.
*/
int _printf(const char *format, ...)
{
	int count, index;
	char storage[BUFFER_SIZE];
	va_list membs;

	count = 0;
	index = 0;
	va_start(membs, format);
	if (format == NULL)
		return (count);
	for (; *format != '\0'; format++)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
			{
				storage[index++] = '%';
				if (index == BUFFER_SIZE)
				{
					print_storage(storage, &index);
					count += index;
				}
			}
			else
				count += get_spec(*(format), membs);
		}
		else
		{
			storage[index++] = *format;
			if (index == BUFFER_SIZE)
			{
				print_storage(storage, &index);
				count += index;
			}
		}
	}
	print_storage(storage, &index);
	count += index;

	va_end(membs);
	return (count);
}
