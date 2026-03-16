#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers from min to max
* @min: first value
* @max: last value
*
* Return: pointer to the newly created array,
*         or NULL if min > max or malloc fails
*/
int *array_range(int min, int max)
{
int *array;
int i = 0;

if (min > max)
return (NULL);
array = malloc(sizeof(int) * (max - min + 1));
if (array == NULL)
return (NULL);
while (i < (max - min + 1))
{
array[i] = (min + i);
i++;
}
return (array);
}
