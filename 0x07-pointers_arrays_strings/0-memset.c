#include "main.h"

/**
 * _memset - fill a memory with a value
 * @s: memory to fill.
 * @b: value for the filling.
 * @n: Bytes to fill.
 * Return: s.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int pos;

for (pos = 0; pos < n; pos++)
{
s[pos] = b;
}
return (s);
}
