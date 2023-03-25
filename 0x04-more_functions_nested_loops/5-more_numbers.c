#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, since 0 up to 14.
 *
 * Return: 10 times of number since 0 up to 14.
 *
 */
void more_numbers(void)
{
	int s, j;

	for (s = 0; s < 10; s++)
	{
	for (j = 0; j < 14; j++)
	{
	if (j > 9)
	{
	_putchar((j / 10) + '0');
	}
	_putchar((j % 10) + '0');
	}
	_putchar('\n');
	}
}
