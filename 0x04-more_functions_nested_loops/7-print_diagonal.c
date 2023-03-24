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
int i, a;
for (i = 1; i <= n; i++)
{
for (a = 1; a <= n; a++)
{
if (a == i)
{
_putchar('\\');
}
else if (b < a)
{
_putchar(' ');
}
}
}
_putchar('\n');
}
}
