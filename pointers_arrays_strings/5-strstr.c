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
      needle++;
    }
  needle -= ln;
  
  while (*haystack)
    {
      h = haystack;
      n = needle;
      match = 0;
      while (*n)
	{
	  match++;
	  n++;
	  h++;
	}
      if (match == ln)
	    {
	      return (h);
	    }
      haystack++;
    }  
return (NULL);
}
