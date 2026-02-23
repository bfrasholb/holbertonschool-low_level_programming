#include "main.h"
#include <stdio.h>

/**
 *
 *
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
