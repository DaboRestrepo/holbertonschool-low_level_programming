#include "main.h"
#include <stdio.h>

/**
 * main - Imprimir el nombre del archivo ejecutable.
 * @argc: tamaño de la array.
 * @argv: array de argumentos.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int count;

for (count = 0; count < argc; count++)
{
printf("%s\n", argv[count]);
}
return (0);
}

