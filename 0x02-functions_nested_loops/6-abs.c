#include "main.h"
/**
 *_abs - print the absolute value of int
 *@n: the int that i have to find the ans for
 */
int _abs(int n)
{
if (n > 0)
{
_putchar(n);
return (n);
}
else if (n == 0)
{
_putchar(n);
return (n);
}
else
{
_putchar(-n);
return (-n);
}
}
