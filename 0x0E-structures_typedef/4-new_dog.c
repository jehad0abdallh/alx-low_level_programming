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
	for (ln = 0; name[ln]; ln++)
		;
	for (lo = 0; owner[lo]; lo++)
		;

	new_d->name = malloc(ln + 1);
	new_d->owner = malloc(lo + 1);

	if (!(new_d->name) || !(new_d->owner))
	{
		free(new_d->name);
		free(new_d->owner);
		free(new_d);
		return (NULL);
	}
	for (i = 0; i < ln; i++)
		new_d->name[i] = name[i];
	new_d->name[i] = '\0';
	new_d->age = age;

	for (i = 0; i < lo; i++)
		new_d->owner[i] = owner[i];
	new_d->owner[i] = '\0';

	return (new_d);
}
