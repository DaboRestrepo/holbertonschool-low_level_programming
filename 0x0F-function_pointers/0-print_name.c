#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Print the name giving by main
 * @name: first value type char
 * @f: second value type char
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
if (f)
f(name);
}
