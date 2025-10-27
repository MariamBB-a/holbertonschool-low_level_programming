#include "main.h"
#include <stddef.h>

/**
 *_strchr - locates the first occurrence of a character in a string
 * @s: pointer to the string to search
 * @c: character to locate
 *
 * Return: pointer
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		return (&s[i]);
	}
	if (c == '\0')
		return (&s[i]);
	return (NULL);
}
