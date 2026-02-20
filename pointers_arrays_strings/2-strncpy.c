#include "main.h"
#include <stdio.h>

/**
*_strncpy-function changes *dest[0:i] to *src with a limit of n bytes.
*@dest:destination string.
*@src:source string.
*@n:an integer.
*Return: returns appended str.
*/

char *_strncpy(char *dest, char *src, int n)
{
char *d = dest;
int i = 0;

while ((src[i] != '\0') && (i < n))
{
*d++ = src[i];
i++;
}
*d = '\0';
return (dest);
}
