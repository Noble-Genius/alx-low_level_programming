#include <stdio.h>

/**
 * main - main block
 * @void: no arg
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
}
