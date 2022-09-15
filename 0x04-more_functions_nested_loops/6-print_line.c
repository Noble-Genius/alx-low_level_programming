#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 *
 * @n: type integer
 */

void print_line(int n)
{
	char c;

	for (c = '0'; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
