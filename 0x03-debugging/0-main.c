#include "main.h"
/**
 *main - the func name
 *Return: always 0
 */
int main(void)
{
int i;
if (i > 0)
{
printf("%d is positive\n", i);
positive_or_negative(i);
}
else if (i == 0)
{
printf("%d is zero\n", i);
positive_or_negative(i);
}
else
{
printf("%d is negative\n", i);
positive_or_negative(i);
}
}
