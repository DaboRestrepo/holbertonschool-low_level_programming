#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - Addition operation.
 * @a: first value.
 * @b: second value.
 *
 * Return: the result add.
 */

int op_add(int a, int b)
{
return (a + b);
}

/**
 * op_sub - substraction operation.
 * @a: first value.
 * @b: second value.
 *
 * Return: the result rest.
 */

int op_sub(int a, int b)
{
return (a - b);
}

/**
 * op_mul - Multiplication operation.
 * @a: first value.
 * @b: second value.
 *
 * Return: the result mul.
 */

int op_mul(int a, int b)
{
return (a * b);
}

/**
 * op_div - Division operation.
 * @a: first value.
 * @b: second value.
 *
 * Return: the result div.
 */

int op_div(int a, int b)
{
if (b > 0)
{
return (a / b);
}
else
{
printf("Error\n");
exit(100);
}
}

/**
 * op_mod - Modular operation.
 * @a: first value.
 * @b: second value.
 *
 * Return: the result mod.
 */

int op_mod(int a, int b)
{
if (b > 0)
{
return (a % b);
}
else
{
printf("Error\n");
exit(100);
}
}
