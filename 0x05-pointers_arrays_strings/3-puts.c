#include "main.h"
/**
*_puts - mainfunc
*@str: the name of func
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
