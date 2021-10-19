#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Imprimir suma de diagonales.
 * @a: Arreglo con los elementos.
 * @size: Tamaño que de referencia.
 * Return: void.
 */

void print_diagsums(int *a, int size)
{
int b;
int suma1 = 0;
int suma2 = 0;

for (b = 0; b < size; b++)
{
suma1 = suma1 + a[b];
a = a + size;
}
a = a - size;
for (b = 0; b < size; b++)
{
suma2 = suma2 + a[b];
a = a - size;
}
printf("%d, %d\n", suma1, suma2);
}
