#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - A main function.
 *
 * @dest: the string to print.
 *
 * @src: the second string to be printed
 *
 * @n: the integer value
 *
 * Return: Always 0 (success)
 */
char *_strncat(char *dest, char *src, int n)

{
	return (strncat(dest, src, n));
}
