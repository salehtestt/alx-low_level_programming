#include "main.h"
/**
*print_triangle - s the func name
*@size: an int
*/
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int a, b;
for (a = 1; a <= size; a++)
{
for (b = a; b <= size; b++)
{
_putchar(' ');
}
for (b = 1; b <= a; b++)
{
_putchar('#');
}
}
_putchar('\n');
}
}