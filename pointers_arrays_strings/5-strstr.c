#include "main.h"
#include <stdio.h>

/**
 *
 *
 */

char *_strstr(char *haystack, char *needle)
{
  char *n;
  int ln = 0; /** length of needle */
  int match;
  char *h;
  
  while (*needle)
    {
      ln++;
    }
  
  while (*haystack)
    {
      n = needle;
      match = 0;
      while (*n)
	{
	  h = haystack;
	  if (match == ln)
	    {
	      return (haystack);
	    }
	  if (*needle == *h)
	    {
	      match++;
	    }
	  needle++;
	}
      haystack++;
    }
  
return (NULL);
}
