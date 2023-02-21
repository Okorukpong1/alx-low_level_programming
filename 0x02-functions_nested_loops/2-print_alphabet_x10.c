#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int newline = 0;
	char pc;

	while (newline <= 9)
	{
		for (pc = 'a'; pc <= 'z'; pc++)
		{
			_putchar(pc);
		}
		_putchar('\n');
		newline++;
	}
}
