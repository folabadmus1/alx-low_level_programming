#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Returns the sum of a and b.
 *
 * @a: first integer
 *
 * @b: the second integer
 *
 * Return: Always 0 (success)
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the differences of a and b.
 *
 * @a: first integer
 *
 * @b: the second integer
 *
 * Return: Always 0 (success)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of a and b.
 *
 * @a: first integer
 *
 * @b: the second integer
 *
 * Return: Always 0 (success)
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the result of division a and b.
 *
 * @a: first integer
 *
 * @b: the second integer
 *
 * Return: Always 0 (success)
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - Fucntion that returns the remainder.
 *
 * @a: first integer
 *
 * @b: the second integer
 *
 * Return: Always 0 (success)
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
