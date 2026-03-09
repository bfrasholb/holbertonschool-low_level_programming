#include "main.h"
#include <stdlib.h>

/**
 *create_array-description
 *@size:size
 *@c:character
 *Return:value dependent on result
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i = 0;

if (size == 0)
{
return (NULL);
}
arr = (char *)malloc(size * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
while (i < size)
{
arr[i] = c;
i++;
}
return (arr);
}
