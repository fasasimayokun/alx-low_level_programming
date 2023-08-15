#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the len of the str
 * @s: str to check
 * Return: len of the str
 */
int _strlen(char *s)
{
	int x = 0;

	while (s[x] != '\0')
		x++;

	return (x);
}
/**
 * _strcpy - copies the str pointer to src
 * with the null byte to destination
 * @dest: pointer to copy to
 * @src: where to copy from
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int str_len, x;

	str_len = 0;
	while (src[str_len] != '\0')
		str_len++;

	for (x = 0; x < str_len; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
/**
 * new_dog - generates new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len_1, len_2;

	len_1 = _strlen(name);
	len_2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len_1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len_2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
