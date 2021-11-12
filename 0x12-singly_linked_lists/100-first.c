#include "lists.h"
void first(void)__attribute__((constructor));
/**
 * first - Print before the main
 * Return: Always 0
 */



void first(void)
{
	printf("%s\n", "You're beat! and yet, you must allow,");
	printf("%s\n", "I bore my house upon my back!");
}
