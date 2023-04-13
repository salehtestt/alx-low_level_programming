#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
int i;
int *m;
if (min > max)
{
return (NULL);
}
if (i >= min && i <= max)
{
m = malloc(i);
return (m);
}
if (m == 0)
{
return (NULL);
}
}
