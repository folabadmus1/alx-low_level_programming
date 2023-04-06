#include "main.h"

/**
 * _print_rev_recursion - A function that prints a string in reverse.
 *
 * @s: the string to print
 *
 * Return: Always 0 (success)
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(*s);
	s++;
	_print_rev_recursion(s);
	s--;
}
