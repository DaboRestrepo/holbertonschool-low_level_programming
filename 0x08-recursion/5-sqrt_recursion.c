#include "main.h"
/**
 * _sqrt - Sacar raíz cuadrada.
 * @y: raíz.
 * @n: número natural.
 * Return: return resultado.
 */

int _sqrt(int y, int n)
{
if (y > n)
{
return (-1);
}

if (y * y == n)
{
return (y);
}

return (_sqrt((y + 1), n));
}

/**
 * _sqrt_recursion - Sacar raíz cuadrada.
 * @n: número natural.
 * Return: return resultado.
 */


int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_sqrt(1, n));
}

