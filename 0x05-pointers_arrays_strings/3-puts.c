#include "main.h"

/**
 * _puts - imprimir cadena de caracteres con *
 * @str: variable cadena de caracteres
 * Return: void
 */

void _puts(char *str)
{
while (*str)
{
_putchar (*str);
str++;
}
_putchar('\n');
}
