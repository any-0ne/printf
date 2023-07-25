#include "main.h"

/**
 * printInt - prints integers
 * @arguments: input args
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of what's printed.
 */

int printInt(va_list arguments, char *buf, unsigned int ibuf)
{
	int int_input;
	unsigned int int_in, int_temp, i, div, isneg;

	int_input = va_arg(arguments, int);
	isneg = 0;
	if (int_input < 0)
	{
		int_in = int_input * -1;
		ibuf = handlBuf(buf, '-', ibuf);
		isneg = 1;
	}
	else
	{
		int_in = int_input;
	}

	int_temp = int_in;
	div = 1;

	while (int_temp > 9)
	{
		div *= 10;
		int_temp /= 10;
	}

	for (i = 0; div > 0; div /= 10, i++)
	{
		ibuf = handlBuf(buf, ((int_in / div) % 10) + '0', ibuf);
	}
	return (i + isneg);
}
