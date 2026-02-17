#include <stdio.h>
#include "main.h"

/**
 *
 */

void puts_half(char *str)
{
  int length = 0;
  int i;
  
  while (str[length] != '\0')
    {
      length++;
    }
  if (length % 2 == 0)
    {
      i = length / 2;
      while (i < length)
	{
	  _putchar(str[i]);
	  i++;
	}
    }
  else
    {
      i = (length + 1) / 2;
      while (i < length)
	{
	  _putchar(str[i]);
	  i++;
	}
    }
  _putchar('\n');
}
