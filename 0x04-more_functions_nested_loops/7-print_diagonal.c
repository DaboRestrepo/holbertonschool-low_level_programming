#include "main.h"
/**
 * print_diagonal - check the code
 * @n: variable # que se le da a la función
 * Return: void
 */

void print_diagonal(int n)
{
int m;
int o;

if (n > 0)
{
for (m = 0; m < n; m++)
{
for (o = 0; o < m; o++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
