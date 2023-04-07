#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to the bit to set
 * @index: The index to set the value of the bit
 *
 * Return: 1 if error occurs, else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_undo;

	if (index > (sizeof(unsigned long int) * 6 - 1))
		return (-1);

	bit_undo = 1 << index;
	*n = *n | bit_undo;

	return (1);
}
