#include "main.h"
/**
 * print_last_digit - check the code
 * @a: integer de la función.
 * Return: Always 0.
 */

int print_last_digit(int a)
{
int ld;

ld = a % 10;

if (ld < 0)
{
ld = -1 * ld;
}
_putchar(ld + '0');
return (ld);
}
