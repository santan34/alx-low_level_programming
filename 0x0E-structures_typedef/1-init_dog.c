#include "dog.h"
/**
 * init_dog - initialise the dog class
 * @d: an instance of struct dog
 * @name: the name of the dog
 * @age: the age of the dod
 * @owner: the name of the owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
