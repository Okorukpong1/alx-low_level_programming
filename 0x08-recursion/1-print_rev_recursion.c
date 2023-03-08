#include "main.h"

/**
 * _print_rev_recursion - Prints a string, followed by a new line.
 * @s: string.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1)
	}
	else
		_putchar('\n');
}
