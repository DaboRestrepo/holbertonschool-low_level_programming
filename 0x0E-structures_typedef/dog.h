#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - structure of dog.
 * @name: it refers the name of the dog.
 * @age: it refers the age of the dog.
 * @owner: it refers the owner of the dog.
 *
 * Description: when the struct dog is call,
 * the dog get name, age and owner.
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
