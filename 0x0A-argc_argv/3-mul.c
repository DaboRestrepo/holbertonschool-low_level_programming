#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplicar dos números.
 * @argc: cantidad de argumentos.
 * @argv: lista de argumentos.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
int count, mul = 1;

if (argc > 1)
{
for (count = 1; count < argc; count++)
{
mul *= atoi(argv[count]);
}
printf("%d\n", mul);
}
else if (argc <= 1)
{
printf("Error\n");
return (1);
}
return (0);
}

