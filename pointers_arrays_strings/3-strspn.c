#include "main.h"
#include <stdio.h>

/**
 *
 *
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
