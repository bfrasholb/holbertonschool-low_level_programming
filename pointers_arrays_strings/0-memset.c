#include "main.h"
#include <stdio.h>

/**
*_memset-overwrites a buffer length with a constant.
*@b:constant
*@s:a pointer to the buffer
*@n:the length to overwrite
*Return:returns the overwritten buffer
*/

char *_memset(char *s, char b, unsigned int n)
{
char *p = s;

while (n--)
{
*p++ = b;
}
return (s);
}
