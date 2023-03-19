#include<stdio.h>
/**
*main - hello.c
*Return: Always 0 (succes)
*/
int main(void)
{
int b, a;
for (a = '0'; a <= '9'; a++)
{
for (char b = a + 1; b <= '9'; b++)
{
if (a != b)
{
putchar(a);
putchar(b);
if (a == '8' && b == '9')
continue;
putchar(',');
putchar(' ');
}
}
}
return (0);
}
