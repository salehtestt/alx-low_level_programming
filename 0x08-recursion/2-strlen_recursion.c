#include "main.h"
/**
*_strlen_recursion - the func name
*@s: is the char
*Return: to i
*/
int _strlen_recursion(char *s)
{
int i;
i = 0;
if (*s)
{
i++;
i += _strlen_recursion(s + 1);
}
return (i);
}
