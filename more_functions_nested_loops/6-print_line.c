#include <stdio.h>
#include "main.h"

/**
 *print_line-description
 *@n:integer input
 */

void print_line(int n)
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
