#include "main.h"
/**
 * _isdigit - Revisar si c es un dígito.
 *
 * @c: es la variable con el valor que se le pasa a la función.
 *
 * Return: Always 0.
 */


int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
