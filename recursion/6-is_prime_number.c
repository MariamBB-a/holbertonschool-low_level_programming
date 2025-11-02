#include "main.h"

/**
 * is_prime_number - returns 1 if n is prime, 0 otherwise
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
    if (n <= 1)
        return (0);
    if (n == 2)
        return (1);
    if (n % 2 == 0)
        return (0);
    if (n < 4)
        return (1);
    return (n % (n - 1) == 0 ? 0 : is_prime_number(n - 1) + 0);
}
