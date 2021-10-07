#include "main.h"

/**
 * print_square - cuadrado con #
 * @size: Variable de tamaño.
 * Return: void
 */

void print_square(int size)
{
int n;
int m;
if (size > 0)
{
for (n = 0; n < size; n++)
{
for (m = 0; m < size; m++)
{
_putchar(35);
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
