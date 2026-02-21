#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 */

char *cap_string(char *str)
{
  char sep[] = {'!', '"', '(', ')', ',', '.', ';', '?', '{', '}'};
  int i,j,k = 0;
  int b;

  while (str[i] != '\0')
    {
      b = 0;
      while (sep[j] != '\0')
	{
	  if (str[i] == sep[j])
	    {
	      b = 1;
	      break;
	    }
	  j++;
	}
      while (b == 1)
	{
	  k = i;
	  while (str[k] != '\0')
	    {
	      if ((str[k] >= 'a' && str[k] <= 'z') || (str[k] >= 'A' && str[k] <= 'Z'))
		{
		  if (str[k] >= 'a' && str[k] <= 'z')
		    {
		      str[i] = str[i] - 32;
		    }
		  b = 0;
		}
	      k++;
	    }
	}
      i++;
    }
  return (str);
}
