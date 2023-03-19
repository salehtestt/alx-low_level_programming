#include<stdio.h>
/*
*main - prints the alphabet in lowercase, followed by a new line
*Retyrn: A;ways 0 (success)
*/
int main(void)
{
int n = 97;
for (n = 97; n <= 122; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
