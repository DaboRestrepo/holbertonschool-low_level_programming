#include "main.h"

/**
 * times_table - Tablas de multiplicar
 *
 * Return: Always 0.
 */

void times_table(void)
{
int n;
int m;
int p;

for (n = 0; n <= 9; n++)
{
for (m = 0; m <= 9; m++)
{
p = (n * m);
if (m != 0)
{
_putchar(',');
_putchar(' ');
}
if (p >= 10)
{
_putchar((p / 10) + '0');
_putchar((p % 10) + '0');
}
else if (p < 10 && m != 0)
{
_putchar(' ');
_putchar((p % 10) + '0');
}
else
{
_putchar((p % 10) + '0');
}
}
_putchar('\n');
}
}
