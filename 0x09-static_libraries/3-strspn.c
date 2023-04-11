#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - A main function.
 *
 * @s: the string to print.
 *
 * @accept: the second string to be printed
 *
 * Return: Always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
} 
