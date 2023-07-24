#include "main.h"

/**
 * handlBuf - handels the buffer characters
 * @buf: buffer pointer
 * @c: character
 * @ibuf: index of buffer pointer
 * Return: index of buffer pointer.
 */

int handlBuf(char *buf, char c, unsigned int ibuf)
{
	if (ibuf == 1024)
	{
		printBuf(buf, ibuf);
		ibuf = 0;
	}
	buf[ibuf] = c;
	ibuf++;
	return (ibuf);
}
