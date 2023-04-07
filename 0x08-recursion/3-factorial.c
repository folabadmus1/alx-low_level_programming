#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number.
 *
 * @n: The value to calculate factorial.
 *
 * Return: The integer value
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
