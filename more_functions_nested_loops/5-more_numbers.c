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
int a = i / 10;
int b = i % 10;
if (a == 0)
{
_putchar(i + '0');
i++;
}
else
{
_putchar(a + '0');
_putchar(b + '0');
i++;
}
}
_putchar('\n');
j++;
}
}
