#include "main.h"
#include <stdio.h>

/**
 *_memset-Overwrites a buffer of length with a constant
 *@s:a pointer to an address to start the buffer
 *@b:a constant
 *@n:length of the buffer
 *Return:returns the overwritten buffer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
while ((n--) && (*dest != '\0') && (*src != '\0'))
{
*dest++ = *src++;
}
return (dest);
}
