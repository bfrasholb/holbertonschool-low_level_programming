#include "main.h"

/**
*create_array-description
*@size:size
*@c:character
*Return:value dependent on result
*/

char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i = 0;

if (size == 0)
return (NULL);
array = (char *)malloc(size * sizeof(char));
if (array == NULL)
return (NULL);
while (i < size)
{
array[i++] = c;
}
return (array);
}
