#include "main.h"

/**
 * _prime - Encontrar el númeri primo.
 * @n: número a evaluar.
 * @y: variable para comparar
 * Return: 0 si no es primo y 1 si sí.
 */

int _prime(int n, int y)
{
if (n <= 1)
{
return (0);
}
if (n % y == 0)
{
return (0);
}
if (y == 2 && n % y != 0)
{
return (1);
}

return (_prime(n, y - 1));
}

/**
 * is_prime_number - ¿n es un número primo?
 * @n: número a evaluar.
 * Return: 0 si no es primo y 1 si sí.
 */

int is_prime_number(int n)
{
return (_prime(n, n - 1));
}

