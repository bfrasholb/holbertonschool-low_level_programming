#include "main.h"
#include <stdio.h>

/**
 *_strlen_recursion-returns string length
 *@s:a string
 *Return:returns string length.
 */

int _strlen_recursion(char *s)
{
  int i = 0;
    
  if (*s == '\0')
    {
      return (i);
    }
  if (*s != '\0')
    {
      i++;
      i += _strlen_recursion(++s);
    }
return (i);
}
