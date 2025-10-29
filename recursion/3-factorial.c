#include "main.h"

/**
 * factorial - Returns the factorial of a number.
 * @n: The number to calculate factorial for.
 *
 * Return: factorial of n, or -1 if n < 0 (error).
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
