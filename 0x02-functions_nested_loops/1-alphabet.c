#include "main.h"
/**
 * print_alphabet - imprimir el alfabeto.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
char *h = "abcdefghijklmnopqrstuvwxyz";

while (*h)
{
_putchar(*h);
h++;
}
_putchar('\n');
}
