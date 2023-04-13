#include "maon.h"
/**
 * *malloc_checked - the name of the func
 * @b:is thee int
 * exit: 98
 * Rturn: m
 */
void *malloc_checked(unsigned int b)
{
int *m = malloc(b);
if (m == 0)
exit(98);

return (m);
}
