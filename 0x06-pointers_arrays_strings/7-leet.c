#include "main.h"


/**
 * leet - Intercambiar los caracteres.
 * @tmp: puntero temporal.
 * Return: tmp.
 */

char *leet(char *tmp)
{
int m = 0, n = 0, l = 5;
char s[5] = {'a', 'e', 'o', 't', 'l'};
char d[5] = {'4', '3', '0', '7', '1'};

while (tmp[m])
{
n = 0;
while (n < l)
{
if (tmp[m] == s[n] || tmp[m] == s[n] - 32)
{
tmp[m] = d[n];
}
n++;
}
m++;
}
return (tmp);
}
