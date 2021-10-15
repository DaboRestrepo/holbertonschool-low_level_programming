#include "main.h"
/**
 * rot13 - aplicar ROT13 en un string.
 * @tmp: variable temporal.
 * Return: tmp
 */

char *rot13(char *tmp)
{
int pos1 = 0;
char array1[52] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
char array2[52] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};
int post = 0;

while (tmp[post])
{
pos1 = 0;
while (array1[pos1] && tmp[post] != '\0' && array1[pos1] != '\0')
{
if (tmp[post] == array1[pos1])
{
tmp[post] = array2[pos1];
break;
}
pos1++;
}
post++;
}
return (tmp);
}
