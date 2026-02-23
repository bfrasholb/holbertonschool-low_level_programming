#include "main.h"
#include <stdio.h>

/**
*_strspn-returns a count of characters in s after the first match in accept
*@s:a string
*@accept:a string
*Return:returns the count
*/

unsigned int _strspn(char *s, char *accept)
{
int i = 0;
char *a;

while (*s)
{
a = accept;
while (*a)
{
if (*s == *a)
{
i++;
}
a++;
}
if (*a == '\0')
return (i);
s++;
}
return (i);
}
