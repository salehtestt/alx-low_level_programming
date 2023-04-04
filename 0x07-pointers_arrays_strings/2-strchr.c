#include "main.h"
/*
*_strchr - the func name
*@s: a char
*@c: another char
*/
char *_strchr(char *s, char c)
{
int i = 0;
for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
