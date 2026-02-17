#include <stdio.h>
#include "main.h"

/**
*
*/

int _atoi(char *s)
{
int i = 0;
int digits = 0;
int sign = 1;
int first_digit = 0;

while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
{
i++;
}
while ((s[i] == '-') && !first_digit)
{
sign *= -1;
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
digits = digits * 10 + (s[i] - '0');
first_digit = 1;
i++;
}
return (digits * sign);
}
