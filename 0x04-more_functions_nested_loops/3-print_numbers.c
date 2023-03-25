#include "main.h"

/**
 * print_numbers - Print the numbers since 0 up to 9
 *
 * Return: the number since 0 up to 0
 */

void print_numbers(void)

{
	int j;

	for (j = 0; j <= 9; j++)
	{
		_putchar(j + '0');
	}
	_putchar('\n');
}
