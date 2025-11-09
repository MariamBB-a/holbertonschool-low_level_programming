#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: Assigns the provided values to the members of struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}
