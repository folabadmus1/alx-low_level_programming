#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strchr - A main function.
 *
 * @s: the string to print.
 *
 * @c: the second string to be printed
 *
 * Return: Always 0 (success)
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
