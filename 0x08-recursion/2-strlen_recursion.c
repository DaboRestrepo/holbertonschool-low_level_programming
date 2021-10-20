#include "main.h"
/**
 * _strlen_recursion - calcular el tamaño del str.
 * @s: String.
 * Return: tamaño del str.
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);

s++;
return (_strlen_recursion(s) + 1);

}

