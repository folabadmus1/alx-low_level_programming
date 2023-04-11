#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strstr - A main function.
 *
 * @haystack: the string to print.
 *
 * @needle: the second string to be printed
 *
 * Return: Always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
