#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @j: the parameter to be checked
 * Return: 1 for a character that will be digit and 0 for otherwise
 */
int _isdigit(int j)
{
	if (j >= 48 && j <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
