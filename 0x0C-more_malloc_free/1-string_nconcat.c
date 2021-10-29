#include <stdlib.h>
#include "main.h"

/**
 *
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *string;
unsigned int len_s1 = 0, len_s2 = 0;
unsigned int m, o;

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

for (m = 0; s1[m] != '\0'; m++)
{
string[m] = s1[m];
}

if (n >= len_s2)
{
for (o = 0; s2[o] != '\0'; o++)
{
string[m] = s2[o];
m++;
}
}
else
{
for (o = 0; o < n; o++)
{
string[m] = s2[o];
m++;
}
}
string[m] = '\0';
return (string);
}
