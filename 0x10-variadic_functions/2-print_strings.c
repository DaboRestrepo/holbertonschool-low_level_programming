#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - Print a string.
 * @separator: character separation.
 * @n: lengh.
 * Return: void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int index = 0;
char *str;

va_start(ap, n);

for (; index < n; index++)
{

str = va_arg(ap, char *);
printf("%s", str);

if (separator && index < n - 1)
{
printf("%s", separator);
}
if (str == NULL)
{
printf("(nil)");
}
}
va_end(ap);
printf("\n");
}
