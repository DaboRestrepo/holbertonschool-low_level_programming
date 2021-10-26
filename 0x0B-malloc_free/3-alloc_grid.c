#include <stdlib.h>
/**
 * alloc_grid - two dimensional pointer.
 * @width: variable of width.
 * @height: variable of height.
 * Return: the string.
 */

int **alloc_grid(int width, int height)
{
int **str;
int i, j;

if (width <= 0 || height <= 0)
{
return (NULL);
}
str = malloc(sizeof(int *) * height);
if (str == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
str[i] = malloc(sizeof(int) * width);
for (j = 0; j < width; j++)
{
str[i][j] = 0;
}
}
return (str);
}
