#include "main.h"
/**
*_puts_recursion - is te func name
*@s: is the char
*/
void _puts_recursion(char *s)
{
if (*s)
{
_purtchar(*s};
_puts_recursion(s + 1);
}
else
{
_putchar('\n);
}
