#include <stdio.h>

/**
 * _isupper-description.
 *@c:an integer.
 *Return:0 if not upper case, else 1
 */

int _isupper(int c)
{
if (c <= 90 && c >= 65)
return (1);
else
return (0);
}
