#include "function_pointers.h"
/**
 *print_name - name of the func 
 *@name: the name
 *@f: the func pointer
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}
