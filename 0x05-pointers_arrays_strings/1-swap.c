#include "main.h"
/**
 * swap_int - intercambiar el valor de a y b.
 * @a: valor a intercambiar por b
 * @b: valor a intercambiar por a
 * Return: void.
 */

void swap_int(int *a, int *b)
{
int m = *a;
*a = *b;
*b = m;
}
