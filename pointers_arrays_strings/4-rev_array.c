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
int j = 0;
int temp;

while (j < i)
{
temp = a[j];
a[j] = a[i];
a[i] = temp;
i--;
j++;
}
}
