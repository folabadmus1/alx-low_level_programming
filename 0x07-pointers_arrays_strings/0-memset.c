#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointed destination
 * @b: Constant byte
 * @n: bytes
 * Return: Always 0 (success)
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
