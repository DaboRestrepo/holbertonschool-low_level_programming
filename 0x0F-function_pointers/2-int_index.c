#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - Search an integer in an array.
 * @array: src.
 * @size: lengh of the array.
 * @cmp: pointer to function.
 * Return: -1 if fail, index if success
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if (size <= 0)
{
return (-1);
}
if (array)
{
for (; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}
return (-1);
}
