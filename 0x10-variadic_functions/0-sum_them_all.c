#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - add all the numbers
 * @n: argument
 * Return: 0 if n == 0, sum.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int index = 0, sum = 0;

if (n == 0)
{
return (0);
}
va_start(ap, n);

for (; index < n; index++)
{
sum += va_arg(ap, int);
}

va_end(ap);
return (sum);
}

