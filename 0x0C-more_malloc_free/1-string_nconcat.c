#include <stdlib.h>
#include "main.h"

/**
 *
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *string;
unsigned int len_s1, len_s2;
unsigned int m, o;

(void)m;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

while (s1[len_s1])
{
len_s1++;
}
while (s2[len_s2])
{
len_s2++;
}

string = malloc(sizeof(char) * ((len_s1 + n) + 1));
if (string == NULL)
{
return (NULL);
}

if (n > len_s2)
{
for (m = 0; s2[m] != '\0'; m++)
{
string[len_s1] = s2[m];
len_s1++;
}
}
else
{
for (o = 0; o < n + len_s1; o++)
{
string[o] = s1[o];
}
}
string[o] = '\0';
return (string);
}
