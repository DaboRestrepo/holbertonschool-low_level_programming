#include "main.h"
/**
 * main - print _putchar
 *
 * Return: Always 0.
 */

int main(void)
{
char *h = "_putchar";

while (*h)
{
_putchar(*h);
h++;
}
_putchar('\n');
return (0);
}
