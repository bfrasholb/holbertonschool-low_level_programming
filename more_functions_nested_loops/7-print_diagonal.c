#include <stdio.h>
#include "main.h"

/**
 *print_diagonal-description
 *@n:integer input
 *
 */

void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int a = 0;
int b;
while (a < n)
{
b = 0;
while (b < a)
{
_putchar(' ');
b++;
}
_putchar('\\');
_putchar('\n');
a++;
}
}
}
