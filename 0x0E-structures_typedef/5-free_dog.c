#include<stdlib.h>
#include "dog.h"
/**
 *free_dog - the func name
 *@d: is the argument
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
