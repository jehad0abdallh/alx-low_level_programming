#include"main.h"
#include <stdlib.h>
#include"dog.h"
/*
 * init_dog - function to initale to dog structure
 * @d: struct for dog
 * @name: char pointer
 * @age: flout
 * @owner: char pointer
 * Return: void
 * */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = onwer;
	}
}
