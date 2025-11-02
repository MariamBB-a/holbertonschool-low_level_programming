#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find the square root of
 * Return: natural square root, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	int guess;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	guess = 1;

	while (guess * guess < n)
	{
		guess++;
	}

	if (guess * guess == n)
		return (guess);
	return (-1);
}
