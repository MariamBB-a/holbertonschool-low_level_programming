#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * and copy a string.
 * @str: string to duplicate
 * Return: pointer to the duplicated string
 * NULL if str = NULL or if memory allocation fails
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length = 0;
	int i;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;
	
	duplicate = malloc (sizeof(char) * (length + 1));
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		duplicate[i] = str[i];
	  duplicate[length] = '\0';

    return (duplicate);
}
