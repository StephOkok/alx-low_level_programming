#include "dog.h"
/**
* init_dog - a function to initialize a structure
* @d: pointer to the structure
* @name: pointer to name of dog
* @age: age of dog
* @owner: ponter to owner of dog
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
