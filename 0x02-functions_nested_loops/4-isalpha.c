#include "main.h"

/**
 * _isalpha - check lower o uppercase.
 * @c: integer de c
 * Return: Always 0.
 */

int _isalpha(int c)
{
int b = c;

if (c >= 97 && c <= 122)
{
return (1);
}
else if (b >= 65 && b <= 90)
{
return (1);
}
else
{
return (0);
}
}
