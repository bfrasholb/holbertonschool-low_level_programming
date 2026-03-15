#include "variadic_functions.h"

/**
*print_numbers-prints numbers followed by a new line
*@separator:string to be printed between numbers
*@n:integer count
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i = 0;

va_start(args, n);
while (i < n)
{
if ((i != 0) && (separator != NULL))
{
printf("%s", separator);
}
printf("%d", va_arg(args, int));
i++;
}
va_end(args);
printf("\n");
}
