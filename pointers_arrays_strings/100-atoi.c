#include <stdio.h>
#include "main.h"

/**
 *
 */

int _atoi(char *s)
{
  int i = 0;
  
  while (s[i] != '\0')
    {
      if ((s[i] <= '9') && (s[i] >= '0'))
	{
	  printf("%d", s[i]);
	  i++;
	}
      else
	{
       	  i++;
	}
    }
  return (1);
}
