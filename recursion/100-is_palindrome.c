#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome using recursion only
 * @s: the string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	static int i = 0;
	int len = 0;

	if (!s[i])
	{
		i = 0;
		return (1);
	}

	while (s[len])
		len++;

	if (s[i] != s[len - i - 1])
	{
		i = 0;
		return (0);
	}

	if (i >= len / 2)
	{
		i = 0;
		return (1);
	}

	i++;
	return (is_palindrome(s));
}
