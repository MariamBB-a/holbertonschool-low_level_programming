#include "main.h"
#include <stdlib.h>
#include <string.h>

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

	if (nmemb == 0 || size == 0)
		return (NULL);

	new_arra = malloc(nmemb * size);
	if (new_arra == NULL)
		return (NULL);

	memset(new_arra, 0, nmemb * size);

	return (new_arra);
}
