#include "main.h"
#include <stdio.h>

/**
 *
 *
 */

unsigned int _strspn(char *s, char *accept)
{
  int i = 0;

  while (*s)
    {
      while (*accept)
	{
	  if (*s == *accept)
	   {
	     i++;
	   }
	}
    }
  return (i);
}
