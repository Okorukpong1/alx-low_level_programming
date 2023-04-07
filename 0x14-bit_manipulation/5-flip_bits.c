#include "main.h"

/**
 * flip_bits - return the number of bits needed to be
 * flipped to another.
 * @n: The numberss
 * @m: The number to flip to.
 *
 * Return: number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sow, find;
	unsigned int nom, z;

	find = 1;
	sow = n ^ m;
	nom = 0;

	for (i = 0; i < (sizeof(unsigned long int) * 8); z++)
	{
		if (find == (sow & find))
			nom++;
		find <<= 1;
	}
	return (nom);
}
