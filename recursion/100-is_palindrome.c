#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome (recursively)
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (!*s)
		return (1);

	if (*(s + 1) == '\0')
		return (1);

	if (*(s + 1) && *(s + 2) == '\0')
	{
		if (*s == *(s + 1))
			return (1);
		else
			return (0);
	}
	if (*s == *(s + (_strlen_recursion(s) - 1)))
	{
		char end = *(s + (_strlen_recursion(s) - 1));
		*(s + (_strlen_recursion(s) - 1)) = '\0';
		if (*(s + 1) == '\0')
			return (1);
		return (is_palindrome(s + 1));
	}
	return (0);
}
