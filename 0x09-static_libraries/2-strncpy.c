#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncpy - A main function.
 *
 * @dest: the string to print.
 *
 * @src: the second string to be printed
 *
 * @n: the integer value
 *
 * Return: Always 0 (success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
