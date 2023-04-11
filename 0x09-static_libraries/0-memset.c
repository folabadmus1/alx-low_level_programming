#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - A main function.
 *
 * @s: the string to print.
 *
 * @b: the second string to be printed
 *
 * @n: the integer value
 *
 * Return: Always 0 (success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
