#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a : points to an integer variable address
 * @b : points to an integer variable address
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
