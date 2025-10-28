#include "main.h"
#include <stddef.h>

/*
 *_strpbrk - searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the string containing the bytes to look for
 *results: if nothing (NULL)
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
