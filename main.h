#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for printing functions
 * @type_arg: identifier of the args
 * @f: pointer to a printeing functions
 * Description: struct that stores pointers to a
 * the right printing functions.
 */

typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const char *format, ...);
int printChar(va_list arguments, char *buf, unsigned int ibuf);
int printStr(va_list arguments, char *buf, unsigned int ibuf);
int handlBuf(char *buf, char c, unsigned int ibuf);
int printInt(va_list arguments, char *buf, unsigned int ibuf);
int printBuf(char *buf, unsigned int nbuf);

#endif
