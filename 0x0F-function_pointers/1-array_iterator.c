#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - interate with the actions of the
 * functions.
 * @array: elements to interate.
 * @size: size of the array.
 * @action: todo things.
 * Return: void.
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i = 0;

if (array && action)
{
for (; i < size; i++)
{
action(array[i]);
}
}
else
return;
}

