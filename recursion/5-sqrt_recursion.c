#include "main.h"
#include <stdio.h>

/**
*calc-performs recursion for _sqrt_recursion
*@n:an integer
*@i:a counter used for calc
*Return:returns the square root
*/

int calc(int n, int i)
{
if (i * i == n)
{
return (i);
}
if (i * i > n)
{
return (-1);
}
return (calc(n, i + 1));
}

/**
*_sqrt_recursion-calculates the square root of n
*@n:an integer
*Return:returns the square root
*/
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (calc(n, 0));
}
