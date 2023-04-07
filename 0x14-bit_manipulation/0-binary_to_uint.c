#include  "main.h"

/**
 *binary_to_uint - will convert a binary nom to an unsigned int
 * @b: pointers to a string of 0,1 chars
 *
 * Return: [0]  If b is NULL or contains chars not 0 or 1
 * else - the number under conversion
 */

unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int nom;

	nom = 0;
	if (!b)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	for (len = 0; b[len] != '\0'; len++)
	{
		nom <<= 1;
		if (b[len] == '1')
			nom += 1;
	}
	return (nom);
}
