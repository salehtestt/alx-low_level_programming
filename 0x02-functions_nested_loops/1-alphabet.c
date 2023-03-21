#include <stdio.h>
/*
*print_alphabet - print all alphabet in lowercase
*main - print lowwercase alphabet
*Return: Aleays 0 (success)
*/
void print_alphabet(void);
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
int a;
for (a == 97; a <= 122; a++)
{
putchar(a);
putchar('\n');
}
}
