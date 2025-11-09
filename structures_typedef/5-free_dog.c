#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a dog
 * @d: pointer to dog_t struct to free
 *
 * Description: Frees the name and owner strings, then the struct itself.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
