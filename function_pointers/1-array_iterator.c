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
unsigned long int i;

if ((action != NULL) && (action != NULL))
i = 0;
else
i = size;
while (i < size)
{
action(array[i]);
i++;
}
}
