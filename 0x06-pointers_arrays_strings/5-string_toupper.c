#include "main.h"

/**
 * string_toupper - Cambiar m por M.
 * @tmp: variable temporal del prototipo.
 * Return: tmp.
 */

char *string_toupper(char *tmp)
{
int pos;

for (pos = 0; tmp[pos] != '\0'; pos++)
{
if (tmp[pos] <= 122 && tmp[pos] >= 97)
{
tmp[pos] = tmp[pos] - 32;
}
}
return (tmp);
}
