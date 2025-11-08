#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and initializes it to 0
 * @nmemb: number of elements in the array
 * @size: size in bytes of each element
 *
 * Return: pointer to the allocated memory, or NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *new_arra;
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new_arra = malloc(nmemb * size);
	if (new_arra == NULL)
		return (NULL);

	ptr = (char *)new_arra;
	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (new_arra);
}
