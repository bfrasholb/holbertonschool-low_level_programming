#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array, initializes it to 0
* @nmemb: number of elements
* @size: size of each element
* Return: pointer to allocated memory or NULL if fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i = 0;

if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr == NULL)
return (NULL);
while (i < nmemb * size)
ptr[i++] = 0;
return ((void *)ptr);
}
