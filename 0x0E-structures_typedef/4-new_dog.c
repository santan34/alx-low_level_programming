#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: a dog_t pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *cpy_name = strdup(name);
	char *cpy_owner = strdup(owner);
	dog_t *nw;
	
	if (cpy_name == NULL)
	{
		free(cpy_name);
		free(cpy_owner);
		return (NULL);
	}
	if (cpy_owner == NULL)
	{
		free(cpy_name);
		free(cpy_owner);
		return (NULL);
	}
	nw = malloc(sizeof(dog_t));
	if (nw == NULL)
		return (NULL);
	nw->name = cpy_name;
	nw->age = age;
	nw->owner = cpy_owner;
	return (nw);
}