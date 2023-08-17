#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - performs operation based on
 * the corresponding func picked by user
 * @s: the operation picked
 * Return: a pointer to coresponding func
 */
int(*get_op_func(char *s))(int, int)
{
	op_t ops[] = {{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}};
	int nm = 0;

	while (ops[nm].opp != NULL && *(ops[nm].opp) != *s)
	{
		nm++;
	}
	return (ops[nm].f);
}
