#include "main.h"

/**
 * _strlen - cuenta los char de str
 * @s: toma la posición de str
 * Return: la cuenta
 */

int _strlen(char *s)
{
int count = 0;
while (*(s + count))
count++;
return (count);
}
