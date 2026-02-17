#include <stdio.h>
#include "main.h"

/**
 *
 */

int _atoi(char *s)
{
  int i = 0;
  int digits = 0;
  int sign = 1;
  
  while (s[i] != '\0')
    {
      if ((s[i] <= '9') && (s[i] >= '0'))
	{
	  digits = digits * 10 + (s[i] - '0');
	}
      else if (s[i] == '-')
	{
	  sign *= -1;
	}
      i++;
    }
  return (digits * sign);
}
