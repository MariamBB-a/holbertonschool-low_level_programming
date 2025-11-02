#include "main.h"

/**
 * is_prime_number - checks if an integer is a prime number using recursion only
 * @n: the number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	int num, i;

	if (n <= 1)
		return (0);

	if (n < 0)
	{
		num = -n / 1000;
		i = -n % 1000;

		if (i * i > num)
			return (1);
		if (num % i == 0)
			return (0);

		return (is_prime_number(-(num * 1000 + (i + 1))));
	}
	return (is_prime_number(-(n * 1000 + 2)));
}
