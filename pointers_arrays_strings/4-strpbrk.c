#include "main.h"
#include <stdio.h>

/**
*_strpbrk-returns a pointer to the first match (x E accept) E s
*@s:a string
*@accept:a string
*Return:returns a pointer
*/

char *_strpbrk(char *s, char *accept)
{
char *a;
char *p;
int stop = 0;

while (*s)
{
a = accept;
while (*a)
{
if (*a == *s)
{
p = s;
stop = 1;
break;
}
a++;
}
if (stop)
{
break;
}
s++;
}
return (p);
}
