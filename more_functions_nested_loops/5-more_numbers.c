#include <stdio.h>
#include "main.h"

/**
 *more_numbers-description.
 *
 *Return: 0
 *
 */

void more_numbers(void)
{
int j = 0;
while (j < 10)
{
int i = 0;
while (i < 10)
{
_putchar(i + '0');
i++;
}
_putchar('\n');
j++;
}
}
