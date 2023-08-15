#include <stdlib.h>
#include "dog.h"
/**
 * val_dog - initialize a variable of type struct dog
 * @d: address to struct dog
 * @name: name to input
 * @age: age to input
 * @owner: owner of dog
 * Return: nothing (void)
 */
void val_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
