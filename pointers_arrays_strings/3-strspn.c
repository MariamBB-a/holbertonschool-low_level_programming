#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search
 * @accept: the set of characters to match
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, count = 0;
	unsigned int j, count = 0;
	int = found;

	for (i =0; s[i] != '\0'; i++)
	{
		int found = 0;
		for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                found = 1;
                break;
            }
        }

        if (!found)
            return count;

        count++;
	
    return count;
}
    
