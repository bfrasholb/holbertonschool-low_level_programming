#include "main.h"
#include <stdio.h>

/**
*_pow_recursion-calculates x to the power of y with recursion
*@x:integer
*@y:integer
*Return:returns value of x**y
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, y - 1));
}
