#include "main.h"

/**
 * printStr - writes the string to stdout
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: On success 1.
 */

int printStr(va_list arguments, char *buf, unsigned int ibuf)
{
	char *str;
	unsigned int i;
	char nill[] = "(nil)";

	str = va_arg(arguments, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			ibuf = handlBuf(buf, nill[i], ibuf);
		return (5);
	}
	for (i = 0; str[i]; i++)
		ibuf = handlBuf(buf, str[i], ibuf);
	return (i);
}
