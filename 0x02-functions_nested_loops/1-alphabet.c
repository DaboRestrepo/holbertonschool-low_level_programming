#include "main.h"
/**
 * print_alphabet - imprimir el alfabeto.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
char h[] = {"abcdefghijklmnopqrstuvwxyz"};
int a;

for (a = 0 ; a <= 26 ; a++)

_putchar(h[a]);
_putchar('\n');
}