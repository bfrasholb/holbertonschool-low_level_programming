#include <stdio.h>
#include "main.h"

/**
 *more_numbers-description.
 *Return: 0
 *
 */

void more_numbers(void)
{
int j = 0;
while (j < 10)
{
int i = 0;
while (i < 15)
{
if (i > 9)
{
_putchar((i/10) + '0');
}
_putchar((i % 10) + '0');
i++;
}
_putchar('\n');
j++;
}
}
