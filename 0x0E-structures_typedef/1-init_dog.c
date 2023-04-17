#include<stdlib.h>
#include "dog.h"
/**
 *init_dog - the func name
 *@d: the name of steuct
 *@name: is the name
 *@age: is the age
 *@owner: is the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
{
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
