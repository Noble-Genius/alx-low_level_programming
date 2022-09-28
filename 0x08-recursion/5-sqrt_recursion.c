#include "main.h"

/**
 * seeker - help in finding the sqr root
 * @s: number
 * @i: number
 * Return: sqr root or -1 if not
 */

int seeker(int s, int i)
{
	int sqr;

	sqr = i * i;
	if (sqr == s)
		return (i);
	else if (sqr < s)
		return (seeker(s, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - return the sqr root of a number
 * @n: number to be sqr rooted
 * Return: sqr root or -1
 */

int _sqrt_recursion(int n)
{
	return (seeker(n, 1));
}
