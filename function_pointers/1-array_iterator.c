#include "function_pointers.h"
#include <stdio.h>
/**
*array_iterator-calls a function on each member of an array
*@array:an array
*@size:size of the array
*@action:function to be called
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned long int i = 0;

if ((array == NULL) | (action == NULL))
{
return;
}
while (i < size)
{
action(array[i]);
i++;
}
}
