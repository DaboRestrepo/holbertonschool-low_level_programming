#include <stdio.h>
#include <stdlib.h>
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
unsigned int index = 0;

va_start(ap, n);
for (; index < n; index = va_arg(ap, int))
{
printf("%i%c", index, *separator);
}
va_end(ap);

printf("\n");
}
