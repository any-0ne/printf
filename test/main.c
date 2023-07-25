#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("Let's try to printf a simple sentence.this a char:: %c ::\n", 'v');
    _printf("Let's try to printf a simple sentence.this a string:: %s ::\n", "engineer");
    _printf("Let's try to printf a simple sentence.this a percent:: %% ::\n");
    _printf("Let's try to printf a simple sentence.this a char:: %i ::\n", 1234);
    _printf("Let's try to printf a simple sentence.this a char:: %d ::\n", 1234);
    return (0);
}
