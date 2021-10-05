#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Números desde y hasta el 98
 * @n: número otorgado por el prototipo
 * Return: Always 0.
 */

void print_to_98(int n)
{
if (n > 98)
{
while (n >= 98)
{
printf("%i", n);
n--;
if (n >= 98)
{
printf(", ");
}
}
printf("\n");
}
else if (n < 98)
{
while (n <= 98)
{
printf("%i", n);
n++;
if (n <= 98)
{
printf(", ");
}
}
printf("\n");
}
else
printf("98\n");
}
