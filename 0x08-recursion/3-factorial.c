#include "main.h"
/**
*factorial - the func name
*@n: is the g num
*Return: n;
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else if (n == 1)
{
return (1);
}
else
{
return n * factorial(n-1);
}
}
