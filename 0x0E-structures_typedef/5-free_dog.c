#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - function that frees dogs
  *
  * Description: function that frees up allocated memory for dogs
  *
  * @d: pointer to dog parameters
  *
  * Return: Void
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
