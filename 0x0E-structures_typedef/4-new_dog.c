#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - string length
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i); i++)
		;

	return (i);
}

/**
 * _strcpy - copies string
 * @dest: copy src to destination
 * @src: src copy
 * Return: copy of the original arc
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);
}

/**
 * new_dog - create new instance of struct dog
 * @name: member
 * @age: member
 * @owner: member
 *
 * Return: initialized instance of struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	char *copy_of_name;
	char *copy_of_owner;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);

	dog1->age = age;

	if (name != NULL)
	{
		copy_of_name = malloc(_strlen(name) + 1);
		if (copy_of_name == NULL)
		{
			free(dog1);
			return (NULL);
		}
		dog1->name = _strcpy(copy_of_name, name);
	}
	else
		dog1->name = NULL;

	if (owner != NULL)
	{
		copy_of_owner = malloc(_strlen(owner) + 1);
		if (copy_of_owner == NULL)
		{
			free(copy_of_name);
			free(dog1);
			return (NULL);
		}
		dog1->owner = _strcpy(copy_of_owner, owner);
	}
	else
		dog1->owner = NULL;

	return (dog1);
}
