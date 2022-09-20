#include "main.h"

/**
 * _strlen - Returns length of a string
 *
 * @s: Pointer of type integer
 *
 * Return: Returns c
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
		c++;

	return (c);
}
