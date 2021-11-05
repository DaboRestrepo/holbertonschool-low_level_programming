#include <stdio.h>
#include <stdarg.h>
#include  "variadic_functions.h"
/**
 * print_all - Print all.
 * @format: Formato.
 */
void print_all(const char * const format, ...)
{
va_list ap;
int index = 0;
char *str, *separator = "";

va_start(ap, format);
if (format)
{
while (format[index])
{
switch (format[index])
{
case 'i':
printf("%s%i", separator, va_arg(ap, int));
break;
case 'c':
printf("%s%c", separator, va_arg(ap, int));
break;
case 'f':
printf("%s%f", separator, va_arg(ap, double));
break;
case 's':
str = (va_arg(ap, char *));
if (!str)
str = "(nil)";
printf("%s%s", separator, str);
break;
default:
index++;
continue;
}
separator = ", ";
index++;
}
}
va_end(ap);
printf("\n");
}
