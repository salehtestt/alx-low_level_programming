#include "main.h"
/**
*print_array - the func name
*@a: the int 1
*@n: the int 2
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < (n - 1); i++)
{
printf("%d, ", a[i]);
}
if (i == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
