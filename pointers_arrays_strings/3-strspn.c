#include "main.h"

/**
 * _strspn - calculates the length of a prefix substring
 * @s: string to search
 * @accept: string containing the set of accepted characters
 *
 * Return: number of bytes in the initial segment of s
 *         that consist only of characters from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}

		if (!found)
			return (count);

		count++;
	}

	return (count);
}
