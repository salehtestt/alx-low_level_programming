#include "main.h"
/**
*print_diagonal - the func name
*@n: an int
*/
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;
for (i = 1; i <= n; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
