#include "dog.h"
/**
* init_dog - a function to initialize a structure
* @d: the structure variable declared
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: 0 success
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
