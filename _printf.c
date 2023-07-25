#include "main.h"

/**
 * _printf - print formated input
 * @format: input string
 * Return: number of chars printed.
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0, len = 0, ibuf = 0;
	va_list arguments;
	int (*function)(va_list, char *, unsigned int);
	char *buffer = NULL;

	va_start(arguments, format);
	buffer = malloc(sizeof(char) * 1024);
	
	if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
                return (-1);

	if (!format[i])
		return (0);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				len++;
				handlBuf(buffer, format[i], ibuf);
			}
			else if (format[i + 1] == '\0')
			{
				printBuf(buffer, ibuf);
				free(buffer);
				va_end(arguments);
				return (-1);
			}
			else
			{	function = get_print_func(format, i + 1);
				if (function == NULL)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
					i--;
					len++;
					handlBuf(buffer, format[i], ibuf);
				}
				else
				{
					len += function(arguments, buffer, ibuf);
					i += idCounter(format, i + 1);
				}
			}
			i++;
		}
		else
		{
			len++;
			handlBuf(buffer, format[i], ibuf);
		}
		for (ibuf = len; ibuf > 1024; ibuf -= 1024);
	}
	printBuf(buffer, ibuf), free(buffer), va_end(arguments);
	return (len);
}
