#include "main.h"

/**
 *_isalpha-function.
 *@c:integer
 *Return: 0 if not a letter 1 if a letter
 */

int _isalpha(int c)
{
if (((c  >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
{
return (1);
}
else
{
return (0);
}
}
