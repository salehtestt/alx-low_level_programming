#include <stdio.h>
#include "main.h"
/**
 *print_to_98 - the func name
 *@n:the int to print to
 */
void print_to_98(int n)
{
int a;
if (n > 98)
{
for (a =n ; a >= 98; a--)
{
if (a == 98)
printf("%d\n", a);
else
printf("%d,", a);
}
}
else if (n < 98)
{
for (a = n ; a <= 98 ; a++)
{
if (a == 98)
printf("%d\n", a);
else
printf("%d,", a);
}
}
}
