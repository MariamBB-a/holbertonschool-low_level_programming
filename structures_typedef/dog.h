#include "main.h"
#include <stdio.h>

/**
 * struct dog - structure that defines a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 *
 * Description: Structure for storing a dog's information
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

int main(void)
{
	struct dog my_dog;

	my_dog.name = "Buddy";
	my_dog.age = 3.5;
	my_dog.owner = "Alice";

	printf("Name: %s\n", my_dog.name);
	printf("Age: %.1f\n", my_dog.age);
	printf("Owner: %s\n", my_dog.owner);

	return (0);
}
