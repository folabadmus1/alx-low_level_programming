#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator -  a function that executes a function given
 * as a parameter on each element of an array.
 * @array: Integer.
 * @size: The size of the array.
 * @action: A pointer to the function.
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
