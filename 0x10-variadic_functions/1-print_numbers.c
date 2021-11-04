#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 *
 *
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int index = 0, num;

va_start(ap, n);
for (; index < n; index++)
{
num = va_arg(ap, int);
printf("%i", num);
if(*separator && index < n - 1)
{
printf("%s", separator);
}
}
va_end(ap);

printf("\n");
}
