/**
 * clear_bit - value of a bit goes to 0 at an index.
 * @n: pointer to bit number tobe settt
 * @index: indexof the bitss
 *
 * Return: -1 else return 1 if not error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int z;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	z = ~(1 << index);
	*n = *n & z;

	return (1);
}
