#include <stdio.h>
#include "function_pointers.h"

/**
*print_name-passes a character array to a function
*@name:an array of type char
*@f:a function
*/

void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
{
f(name);
}
}
