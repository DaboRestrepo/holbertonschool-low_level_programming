#include "main.h"

/**
 * print_line - imprimir una línea según el #.
 * @n: variable que otorga el #
 * Return: Always 0.
 */

void print_line(int n)
{
int m = 95;
while (n != 0 && n > 0)
{
_putchar(m);
n--;
}
_putchar('\n');
}
