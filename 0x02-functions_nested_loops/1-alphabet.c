#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char pc;

	for (pc = 'a'; pc <= 'z'; pc++)
	{
		_putchar(pc);
	}
	_putchar('\n');
}
