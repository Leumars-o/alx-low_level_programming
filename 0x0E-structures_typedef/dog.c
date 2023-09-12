#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - initiales the struct dog variable
  *
  * @ptr: pointer to struct dog
  * @name: pointer to name
  * @age: age parameter for struct dog
  * @owner: pointer parameter to owner
  *
  */
init_dog(struct dog *ptr, char *name, float age, char *owner)
{
	if (ptr == NULL)
		ptr = malloc(sizeof(struct dog));
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
}
