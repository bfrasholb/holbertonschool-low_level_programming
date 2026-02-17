#include <stdio.h>
#include "main.h"
#include <limits.h>

/**
*_atoi-function returns the first integer in a string as type int
*@s:input string
*Return:returns the first number as type int
*/

int _atoi(char *s)
{
int i = 0;
int digits = 0;
int sign = 1;
int first_digit = 0;

while (s[i] != '\0')
{
if (s[i] == '-' && !first_digit)
{
sign *= -1;
}
else if (s[i] >= '0' && s[i] <= '9')
{
int overflow = s[i] - '0';
first_digit = 1;
{
if (digits < (INT_MIN + overflow) / 10)
{
return ((sign == 1) ? INT_MAX : INT_MIN);
}
digits = digits * 10 + (s[i] - '0');
}
}
else if (first_digit)
{
break;
}
i++;
}
return (digits *sign);
}
