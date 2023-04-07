#include "main.h"

/**
 * get_bit - will return the value of a bit at an index
 * @n: tbe bitt
 * @index: index to check bit
 *
 * Return: the value of the bit at the index or -1 if error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
