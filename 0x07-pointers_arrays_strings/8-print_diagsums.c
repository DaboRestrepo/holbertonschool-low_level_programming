#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Imprimir suma de diagonales.
 * @a: Arreglo con los elementos.
 * @s: Tamaño que de referencia.
 * Return: void.
 */

void print_diagsums(int *a, int s)
{
int b;
int suma1 = 0;    
int suma2 = 0;

for (b = 0; b < s; b++)
{
suma1 = suma1 + a[b];
a = a + s;
}
a = a - s;
for (b = 0; b < s; b++)
{
suma2 = suma2 + a[b];
a = a - s;
}
printf("%d, %d\n", suma1, suma2);
}
