#include "main.h"
#include <stdio.h>

/**
 *print_to_98-script prints from input to 98
 *@n:integer
 *
 */

void print_to_98(int n)
{
if (n <= 98)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
printf(", ");
n++;
}
}
else
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
printf(", ");
n--;
}
}
printf("\n");
}
