#include"dog.h"
#include<stdlib.h>
/**
 * new_dog - creat struct with typedef
 * @name: pointer
 * @age: flout
 * @owner: pointr
 * Return: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	int i, ln, lo;

	new_d = malloc(sizeof(*new_d));
	if (new_d == NULL || !(name) || !(owner))
	{
		free(new_d);
		return (NULL);
	}
	else
	{
		new_d->name = name;
		new_d->age = age;
		new_d->owner = owner;
	}
	return (new_d);
}
