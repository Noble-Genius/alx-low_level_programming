#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string.
 *
 * @s: string string parameter
 *
 * Return: Returns the length of string
 *
 */

int _strlen_recursion(char *s)
{
	int c = 0;

	if (*s == '\0')
		return (0);
	c = 1 + _strlen_recursion(s + 1);
	return (c);
}
