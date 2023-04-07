#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 *
 * @x: the value to be returned
 *
 * @y: the power of x
 *
 * Return: Always 0 (success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
		return (x * _pow_recursion(x, y - 1));
}
