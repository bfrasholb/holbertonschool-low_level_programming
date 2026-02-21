#include "main.h"
#include <stdio.h>

/**
*reverse_array-reverse prints ur array
*@a:an array
*@n:max strlen of a
*Return:void
*/

void reverse_array(int *a, int n)
{
int i = n - 1;

while (i >= 0)
{
if (i != n - 1)
{
printf(", ");
}
printf("%d", a[i]);
i--;
}
printf("\n");
}
