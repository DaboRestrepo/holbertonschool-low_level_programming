#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 */

char *argstostr(int ac, char **av)
{
int i, j, k, count;
char **new_av;

if (av == NULL || ac == NULL)
{
return (NULL);
}
for (count = 0; count < ac; count++)
{
continue;
}
new_av = malloc(sizeof(char *) * count);
for (i = 0; i < count; i++)
{
new_av[i] = malloc(sizeof(char) * count);
if (new_av[i] == NULL)
{
for (j = 0; j < count; j++)
{
free(new_av[j]);
}
free(new_av);
}
for (k = 0; k < count; k++)
{
putchar(new_av[k]);
putchar('\n');
}
}
return (new_av);
}
