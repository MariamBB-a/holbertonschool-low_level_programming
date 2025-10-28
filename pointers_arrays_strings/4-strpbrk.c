#include "main.h"
#include <stddef.h>

/*
 *main: find a character in two strings
 *s: is a string yout are looking through
 *accept: is another string you are looking through
 *results: if nothing (NULL)
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		for (char *a = accept; *a; a++)
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
