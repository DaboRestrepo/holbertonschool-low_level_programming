#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Sumar los dígitos
 * @argc: Cantidad.
 * @argv: Elementos.
 * Return: 1 si no es dígito y 0 si es exitoso.
 */

int main(int argc, char **argv)
{
int count, i = 0, sum = 0;

if (argc < 2)
{
printf("0\n");
}
else
{
for (count = 1; count < argc; count++)
{
for (i = 0; i < count; i++)
{
if (isdigit(argv[count][i]) == 0)
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[count]);
}
printf("%d\n", sum);
}
return (0);
}

