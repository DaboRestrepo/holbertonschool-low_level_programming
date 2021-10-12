#include <stdio.h>
#include "main.h"

/**
 * print_array - imprimir elementos de la array
 * @a: copia de la array
 * @n: representación elemn en la array
 * Return: void
 */

void print_array(int *a, int n)
{
int pos = 0;

for (pos = 0; pos <= n - 1; pos++)
{
if (pos < n && pos != 0)
{
printf(", ");
}
printf("%d", a[pos]);
}
printf("\n");
}
