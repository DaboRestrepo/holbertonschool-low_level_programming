#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main -  imprimir la cantidad de argumentos.
 * @argc: cantidad de elementos.
 * @argv: lista de elementos.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
(void)argv;
return (0);
}

