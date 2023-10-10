#ifndef DOG_H
#define DOG_H
/**
 * struct dog - define dog
 * @name: char
 * @age: flout
 * @owner: char
 * Description: for dogs
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
