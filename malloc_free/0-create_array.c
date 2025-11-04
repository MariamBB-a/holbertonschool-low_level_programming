#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Create an array of chars initializes it with a specific char
 * Allocates memory for an array of chars of size @size,
 * initializes each element with the character @c
 * @size:The size of the array to create
 * @c:The character to initialize the array with
 *
 * Return: Pointer to the created array, or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
