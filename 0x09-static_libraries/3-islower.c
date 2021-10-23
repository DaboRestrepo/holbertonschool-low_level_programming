#include "main.h"

/**
 * _islower - check el lowercase.
 * @c: integer c.
 * Return: 1 si es lowercase.
 */


int _islower(int c)
{
int b = c;

if (b >= 97 && b <= 122)
{
return (1);
}
else
{
return (0);
}
}
