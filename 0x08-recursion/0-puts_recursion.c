#include "main.h"

/**
 * _puts_recursion - A function that prints a string.
 *
 * @s: the string to print
 *
 * Return: Always 0 (success)
 */

void _puts_recursion(char *s)
{
	for (; *s != '\0'; s++)
	{
	_putchar(*s);
	}
	_putchar('\n');

}
