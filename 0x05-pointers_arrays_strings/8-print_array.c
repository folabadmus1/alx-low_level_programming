#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array of integers.
 *
 * @a: Array of integer
 *
 * @n: Number of elements of the array to be printed
 *
 * Return: Empty.
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
	printf("%d", a[j]);
	{
	printf(", ");
	}
	}
	printf("\n");
}
