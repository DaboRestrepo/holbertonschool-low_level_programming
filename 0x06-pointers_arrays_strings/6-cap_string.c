#include "main.h"
/**
 * cap_string - Cambiar a mayúscula.
 * @tmp: puntero temporal.
 * Return: tmp
 */
char *cap_string(char *tmp)
{
int pos = 0, count = 13, pos_cond;
char cond[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', 32, 9, 10};

while (tmp[pos])
{
pos_cond = 0;
while (pos_cond < count)
{
if ((pos == 0 || tmp[pos - 1] == cond[pos_cond])
&& (tmp[pos] >= 97 && tmp[pos] <= 122))
{
tmp[pos] = tmp[pos] - 32;
}
pos_cond++;
}
pos++;
}
return (tmp);
}
