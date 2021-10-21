#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
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


int is_prime_number(int n)
{

return (_prime(n, n - 1));
}

