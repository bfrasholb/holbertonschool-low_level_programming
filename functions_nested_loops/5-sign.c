#include "main.h"

/**
 *print_sign-description
 *@n:integer
 *Return:0 for value 0, 1 for positive, and -1 for negative
 */

int print_sign(int n)
{
if (n != 0)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else
{
_putchar('-');
return (-1);
}
}
else
{
_putchar(0);
return (0);
}
}
