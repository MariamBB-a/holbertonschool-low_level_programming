#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function on element of an array
 * @array: the array of integers
 * @size: the size of the array
 * @action: pointer to the function executed on each element
 *
 * Description: This function goes through element of the array
 * and applies the function pointed to by 'action' element.
 * If either array or action is NULL, does nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
