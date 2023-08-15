#ifndef DOG_H
#define DOG_H
/**
 * struct dog - the description of the dog's info
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: nothing (void)
 */

/**
 * dog_t - new struct name for dog
 */
typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
