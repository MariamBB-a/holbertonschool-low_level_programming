#include "main.h"

/**
 * _memset() fill with bytes
 * @n filled by
 * @s memory area copy from
 * @b memory value
 *
 * return to pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
