#include "main.h"
#include <stdio.h>
/**
 * main - imprimir la lista de los elementos.
 * @argc: cantidad de elementos.
 * @argv: lista de elementos.
 * Return: always 0.
 */
int main(int argc, char **argv)
{
int count;

for (count = 0; count < argc; count++)
{
printf("%s\n", argv[count]);
}
return (0);
}

