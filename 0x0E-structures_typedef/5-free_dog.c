#include "dog.h"
/**
 * free_dog - free dogss
 * @d: the struct to free
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}