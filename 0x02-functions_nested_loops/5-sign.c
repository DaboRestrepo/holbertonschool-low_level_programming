#include "main.h"
/**
 * print_sign - check el signo del número.
 *
 * Return: según el número.
 */

int print_sign(int n)
{
int b = n;

if (b > 0)
{
_putchar('+');
return (1);
}
else if (b == 0)
{
_putchar('-');
return (0);
}
else
{
_putchar('0');
return (-1);
}
}
