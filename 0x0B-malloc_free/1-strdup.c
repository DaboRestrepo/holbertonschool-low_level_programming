#include <stdlib.h>
/**
 *
 *
 */

char *_strdup(char *str)
{
int i;
int str_len = 0;
char *str2;
if (str == NULL)
{
return (NULL);
}
for (str_len = 0; str[str_len] != '\0'; str_len++)
{
continue;
}
str2 = malloc(sizeof(char) * (str_len + 1));
for (i = 0; i < str_len + 1; i++)
{
if (str2 == NULL)
{
return (NULL);
}
str2[i] = str[i];
}
return (str2);
}
