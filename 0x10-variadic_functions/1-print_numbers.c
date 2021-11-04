#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Print the numbers.
 * @separator: is the separator.
 * @n: lengh
 * Return: void.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int index = 0;

va_start(ap, n);
for (; index < n; index++)
{
printf("%i", va_arg(ap, int));
if (separator && index < n - 1)
{
printf("%s", separator);
}
}
va_end(ap);

printf("\n");
}
