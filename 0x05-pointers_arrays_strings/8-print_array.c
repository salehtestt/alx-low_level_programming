#include "main.h"
/**
*print_array - the func name
*#a: the int 1
*#n: the int 2
*/
void print_array(int *a, int n)
{
*a[n];
int i;
for (i = 1; i <= n; i++)
{
printf ("%d", *a);
if (i < n)
{
printf (',');
printf (' ');
}
}
