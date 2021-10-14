#include "main.h"


/**
 * reverse_array - Reversar el char.
 * @a: an array of integer.
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
int m;
int aux[30];
int l = 0;

for (m = n - 1; m >= 0; m--, l++)
{
aux[l] = a[m];
}

for (m = 0; m < n; m++)
{
a[m] = aux[m];
}
}
