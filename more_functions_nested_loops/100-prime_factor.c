#include <stdio.h>
/**
 * main - entry point
 * description: prints the largest factor of a number.
 * return: always 0
 */
int main(void)
{
	long n = 612852475143
	long factor = 2;

	while (factor * factor <= n)
	{
		if  n % factor == 0)
		{
			n /= factor;
		}
		else
		{
			factor++;
		}
	}
	printf("%ld\n", n);
	return (0);
}
