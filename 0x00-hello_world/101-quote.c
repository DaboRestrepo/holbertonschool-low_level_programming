#include <stdio.h>
#include <unistd.h>
/**
 * main - Imprime la frase sin usar printf ni puts
 * Return: always 1.
 */
int main(void)
{
write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}

