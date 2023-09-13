#include "dog.h"
#include <stdlib.h>

/**
  * _strlen - function that finds the lenght of a string
  *
  * @s: pointer to string character to analyze
  *
  * Return: int len value
  */
int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
/**
  * _strcpy - function that copies a string from src to dest
  *
  * @dest: Pointer to string destination
  * @src: pointer to string source
  *
  * Return: dest char
  */
char *_strcpy(char *dest, char *src)
{
	int i;
	int len = 0;

	len = _strlen(src);

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
  * new_dog - function that creates a new dog
  *
  * Descriprion: function creates a new dog and stores
  * a copy of name and owner
  *
  * @name: pointer to name parameter
  * @age: dog age to initialize
  * @owner: pointer to string owner to initialize
  *
  * Return: New dog data, NULL if it fails
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int namelen = 0;
	int ownerlen = 0;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	namelen = _strlen(name);
	ownerlen = _strlen(owner);
	dog->name = malloc((sizeof(char) * namelen) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc((sizeof(char) * ownerlen) + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
