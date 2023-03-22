#include "main.h"
/**
 *print_sign - print the num if it less or more than 0
 *@n: is a num more or less than 0
 *Return: 1 if it more than 0 0 if it 0 -1 if it less than 0
 */
int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar('+');
_putchar(',');
_putchar(' ');
_putchar('n');
}
else if (n == 0)
{
return (0);
_putchar('0');
_putchar(',');
_putchar(' ');
_putchar('n');
}
else
{
return (-1);
_putchar('-');
_putchar(',');
_putchar(' ');
_putchar('n');
}
}
