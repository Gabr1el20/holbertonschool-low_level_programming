#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strcpy - copies the string pointed to by src,
 * to the buffer pointed to by dest
 * @dest: the destinatary.
 * @src: Placeholder.
 * Return: Placeholder.
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count] != 0)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (src);
}
/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: age of the dog
 * @owner: owner of the dog.
 * Return: Pointer to the struct if succedd, NULL
 * the function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	int countname = 0, countowner = 0;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	while (name[countname])
		countname++;
	while (owner[countowner])
		countowner++;
	ptr->name = malloc(sizeof(char) * (countname + 1));
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->owner = malloc(sizeof(char) * (countowner + 1));
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	_strcpy(ptr->name, name);
	if (_strcpy(ptr->name, name) == NULL)
	{
		free(ptr->owner);
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	_strcpy(ptr->owner, owner);
	if (_strcpy(ptr->owner, owner) == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->age = age;
	return (ptr);
}
