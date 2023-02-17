#include <stdio.h>

/**
 * main - prints all single number of base 10
 * starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	int n;

	for ( 48; n < 58; n++)
	{;
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');

