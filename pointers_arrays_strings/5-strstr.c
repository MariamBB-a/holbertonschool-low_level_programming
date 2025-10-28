#include "main.h"
#include <stddef.h>

/**
 * File: 5-strstr.c
 * Description: Function that finds a substring within a string
 * needle: is the substring
 * haystack: is the string
 *
 * result: return pointer to the begining of sunstring,or
 * null if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
