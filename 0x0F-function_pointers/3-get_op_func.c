#include "3-calc.h"

/**
 * get_op_func - prototype function that select the corect function
 * to preform the operation.
 * @s: the operator of the selected function.
 * Return: a pointer to the function.
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i;

	while (i < 5)
	{
		if (s && s[0] == ops[i].op[0] && !s[1])
			return (ops[i].f);
		i++;
	}
	return (0);
}
