#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strpbrk - A main function.
 *
 * @s: the string to print.
 *
 * @accept: the second string to be printed
 *
 * Return: Always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
