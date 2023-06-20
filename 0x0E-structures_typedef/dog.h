#ifndef DOG_H
#define DOG_H

/**
 * dog_t - Typedef of dog structure
 */

typedef struct dog dog_t;

/**
 * struct dog - dog structure
 * @name: first member
 * @age: 2nd member
 * @owner: 3rd member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
