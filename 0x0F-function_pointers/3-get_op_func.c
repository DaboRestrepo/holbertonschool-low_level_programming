#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - Select the correct function
 * @s: is the operator.
 * Return: The function according to the operator
 * Null if has not matches.
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
int i = 0;

while (ops[i].op != NULL)
{
if (*s == *(ops[i].op))
{
return (ops[i].f);
}
i++;
}
return (NULL);
}
