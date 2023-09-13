#include "dog.h"
#include <stdio.h>

/**
  * print_dog - function that prints a struct dog
  *
  * Description: function prints a struct dog
  *
  * @d: pointer to parameters to print
  *
  * Return: Void
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
