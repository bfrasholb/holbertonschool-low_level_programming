#include <stdio.h>
#include "main.h"
/**
 * _isdigit-description.
 *@c:an integer.
 *Return:0 if not upper case, else 1
 */

int _isdigit(int c)
{
if (c <= 57 && c >= 48)
return (1);
else
return (0);
}
