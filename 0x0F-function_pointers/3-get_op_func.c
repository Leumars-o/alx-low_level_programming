#include <stdlib.h>
#include "3-calc.h"

/**
  * get_op_func - function selects the correct function to
  * perform
  *
  * @s: operator passed as argument to the prgram
  *
  * Return: pointer to the appropriate function, NULL otherwise
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op != s && ops[i].op != NULL)
	{
		i++;
	}
	return (ops[i].f);

	if (s == NULL)
		return (NULL);
}
