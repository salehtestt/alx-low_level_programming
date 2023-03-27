#include "main.h"
/**
*reset_to_98 - the func name
*@*n: the pointer
*/
void reset_to_98(int *n)
{
int a;
n = &a;
_putchar(a);
*n = 98;
_putchar(*n);
}
