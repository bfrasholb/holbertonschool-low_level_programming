#include "variadic_functions.h"

/**
 *print_strings-prints strings separated by a separator
 *@separator:a separator string
 *@n:arg count
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
  va_list args;
  unsigned int i = 0;
  char *s = va_arg(args, char *);

  va_start(args, n);
  while (i < n)
    {
      if ((i != 0) && (separator != NULL))
	printf("%s", separator);
      if (s != NULL)
	printf("%s", va_arg(args, char *));
      else
	printf("nil");
      i++;
    }
  va_end(args);
  printf("\n");
}
