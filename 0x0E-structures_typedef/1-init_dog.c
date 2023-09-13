#include "dog.h"
#include <stdlib.h>

/**
  * int_dog - function that initializes a variable
  *
  * Description: function initializes a variaible of type struct dog
  *
  * @d: pointer to struct dog to initialize
  * @name: pointer to dog name
  * @age: pointer to age
  * @owner: pointer to owner
  * 
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
