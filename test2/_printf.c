#include "main.h"

int _printf(const char *format, ...)
{
  va_list args;
  int i = 0, j, count = 0;

  /* Table of specifiers and their handlers */
  char_check specifiers[] = {
    {'c', pchar},
    {'s', pstring},
    {'d', pint},
    {'i', pint},
    {'u', puint},
    {'o', poct},
    {'x', phex_lower},
    {'X', phex_upper},
    {'p', pptr},
    {'f', pfloat},
    {'%', percent},
    {'\0', NULL}
  };

  va_start(args, format);

  while (format && format[i])
    {
      if (format[i] == '%')
	{
	  i++;
	  j = 0;
	  while (specifiers[j].symbol)
	    {
	      if (format[i] == specifiers[j].symbol)
		{
		  count += specifiers[j].handler(args);
		  break;
		}
	      j++;
	    }
	}
      else
	{
	  write(1, &format[i], 1);
	  count++;
	}
      i++;
    }

  va_end(args);
  return count;
}
