#include <stdio.h>
#include "function_pointers.h"

/**
*int_index-passes each element of an array to a function
*@array:an array
*@size:size of the array
*@cmp:a function pointer
*Return:Returns the index of a true value from pointed function, or -1.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

if ((array == NULL) || (cmp == NULL) || (size <= 0))
{
return (-1);
}
while (i < size)
{
if (cmp(array[i]) != 0)
{
return (i);
}
i++;
}
return (-1);
}
