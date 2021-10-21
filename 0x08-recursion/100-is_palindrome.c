#include "main.h"
/**
 * _rev_str - reversar el string.
 * @str: string a reversar.
 * return: la función más 1 y 0.
 */

int _rev_str(char *str)
{
if (str[0])
{
str++;
return (_rev_str(str) + 1);
}
return (0);
}

/**
 * _check_position - checkear la posición.
 * @s: string.
 * @c1: avanza hacia adelante.
 * @c2: avanza hacia atrás.
 * return: la función de s, c1 + 1 y c2 - 1.
 */

int _check_position(char *s, int c1, int c2)
{
if (c1 >= c2)
{
return (1);
}
if (s[c1] == s[c2])
{
return (_check_position(s, c1 + 1, c2 - 1));
}
return (0);
}

/**
 * is_palindrome - checkear si es palíndromo.
 * @s: string.
 * return: la función de check position de s, c1 y c2 - 1.
 */

int is_palindrome(char *s)
{
int m = 0;
int n = _rev_str(s);

return (_check_position(s, m, n - 1));
}

