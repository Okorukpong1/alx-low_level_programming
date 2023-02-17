#include <stdio.h>
#include <ctype.h>
/**
 * main - print the alphabets in reverse
 *
 * Return: 0
 */
int main(void)
{
	char rv

	/*
	 * loops through alphabet from the behind
	 * prints in reverse
	 */
	for (rv = 'z' ; rv >= 'a' ; rv--)
	{
		putchar(rv);
	}
	putchar('\n');
	return (0);
}
