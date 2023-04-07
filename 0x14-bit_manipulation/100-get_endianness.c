#include "main.h"

/**
 * get_endianness - Checks the endianness of the bits
 *
 * Return: 0 If big-endian
 * 1 If little-endian
 */

int get_endianness(void)
{
	char *c;
	int z = 1;

	c = (char *)&z;

	return (*c);
}
