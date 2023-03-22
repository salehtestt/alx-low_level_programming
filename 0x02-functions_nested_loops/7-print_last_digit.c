#include "main.h"
/**
*print_last_digit - func name prints
*@n: an int that i will print
*Return: always to the last digit
*/
int print_last_digit(int n)
{
int a;
a = n % 10;
if (n > 0)
{
_putchar(a);
return (a);
}
else if (n == 0)
{
_putchar(a);
return (a);
}
else
{
_putchar(-a);
return (-a);
}
}
