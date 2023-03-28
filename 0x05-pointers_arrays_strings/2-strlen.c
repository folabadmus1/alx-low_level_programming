 #include <stdio.h>
/**
 *  _strlen - Returns the length of a string.
 *
 * @str: the string to get the length of
 *
 * Return: the length @str.
 */

int _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
