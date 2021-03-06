#include "main.h"

/**
 * _strstr - Identificar substring en string. 
 * @haystack: String principal.
 * @needle: Substring.
 * Return: hastack + a o nulo.
 */

char *_strstr(char *haystack, char *needle)
{
int a = 0, b = 0;
int count_n = 0;
int count_h = 0;

while (haystack[count_h])
{
count_h++;
}
while (needle[count_n])
{
count_n++;
}
for (a = 0; a < count_h; a++)
{
for (b = 0; b < count_n; b++)
{
if (haystack[a + b] != needle[b])
{
break;
}
if (b == count_n)
{
return (haystack + a);
break;
}
}
}
return (0);
}
