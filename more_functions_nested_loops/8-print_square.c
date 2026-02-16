#include <stdio.h>
#include "main.h"

/**
*print_square-description
*@size:integer size of square (side)
*/

void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int i = 0;
int j;
while (i <= size)
{
if (i != size)
{
j = 0;
while (j <= size)
{
if (j != size)
{
_putchar('#');
j++;
}
else
{
_putchar('\n');
j++;
}
}
i++;
}
else
{
i++;
}
}
}
}
