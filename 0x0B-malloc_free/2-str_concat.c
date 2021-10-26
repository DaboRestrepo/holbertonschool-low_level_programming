#include <stdlib.h>
/**
 * _strcat - Concatenate function
 * @dest: destiny of the string
 * @src: source of the string
 * Return: char dest.
 */

char *_strcat(char *dest, char *src)
{
int m;
int n;

for (m = 0; dest[m] != '\0'; m++)
{
continue;
}
for (n = 0; src[n] != '\0'; m++, n++)
{
dest[m] = src[n];
}
return (dest);
}

/**
 * str_concat - Concate s1 and s2.
 * @s1: first word.
 * @s2: second word.
 * Return: The complete string.
 */

char *str_concat(char *s1, char *s2)
{
char *string;
int s1_len, s2_len;

if (s1 == NULL || s2 == NULL)
{
string = "";
}
for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
{
continue;
}
for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
{
continue;
}
string = malloc(sizeof(char) * (s1_len + s2_len));
if (string == NULL)
{
return (NULL);
}
_strcat(string, s1);
_strcat(string, s2);
string += '\0';
return (string);
}
