#include "main.h"

/**
 * print_binary - will print the binary form of a number
 * @n: number that will be printed to binary
 */

void print_binary(unsigned long int n);
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((0 & 1) + '0');
}
