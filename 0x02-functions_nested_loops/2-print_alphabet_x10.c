#include "main.h"

/**
 * print_alphabet_x10 - functions that print 10x alphabets
 *
 * Return: always 0
 */


void print_alphabet_x10(void)
{
	int i;
	char b;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (b = 'a' ; b <= 'z' ; b++)
			_putchar(b);
		_putchar('\n');
	}
}
