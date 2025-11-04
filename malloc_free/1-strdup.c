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
	int length;
	int i;

	if (str == NULL)
		reutrn (NULL);

	while (str[length] != '\0')
		length++;
	
	dublicate = malloc (sizeof(char) * (length + 1));
	if (dublicate == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		dublicate[i] = str[i];
	  duplicate[length] = '\0';

    return (duplicate);
}
