#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @ss: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *ss)
{
	int k;

	k = 0;

	while (s[k] != '\0')
	{
		k++;
	}

	return (k);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l, x;

	l = 0;

	while (src[l] != '\0')
	{
		l++;
	}

	for (x = 0; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int m, n;

	m = _strlen(name);
	n = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (m + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (n + 1));
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
