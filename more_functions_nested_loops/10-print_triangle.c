#include <stdio.h>
#include "main.h"

/**
 *print_triangle-prints a triangle
 *@size:integer size of the triangle
 */

void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
}
  else
    {
      int i = 0;
      while (i < size)
	{
	  int j = 0;
	  while (j < (i+1))
	    {
	      if (j == size)
		{
		  _putchar('#');
		  _putchar('\n');
		  j++;
		    }
	      else
		{
		  _putchar(' ');
		  j++;
		}
	    }
	  i++;
	}
    }
}
