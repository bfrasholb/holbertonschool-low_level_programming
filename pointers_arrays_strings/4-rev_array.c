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
int i = n;
int j = 0;
int *t = a;
int s = 0;

while (j <= n / 2)
{
t[j] = a[i];
t[i] = a[j];
i--;
j++;
}
while (s < n)
{
a[s] = t[s];
s++;
}
}
