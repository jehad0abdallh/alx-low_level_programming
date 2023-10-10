#include<stdio.h>
#include<stdlib.h>
#include"dog.h"
/**
 * free_dog - delelt dog struct
 * @d: stxaruct pointer
 *Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
