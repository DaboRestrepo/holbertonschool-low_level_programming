#include "main.h"
/**
 * factorial - Factorial de n.
 * @n: número para evaluiar.
 * Return: resultado factorial.
 */

int factorial(int n)
{
if (n < 0)
return (-1);

else if (n == 1)
return (1);

return (n * factorial(n - 1));
}

