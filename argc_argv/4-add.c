#include <stdio.h>
#include <stdlib.h>

/**
 *is_number-checks if a string is comprised solely of digits
 *@s:a string passed from main
 *Return:Returns 1 for numbers, 0 for anything else
 */

int is_number(char *s)
{
while (*s)
{
if (*s < '0' || *s > '9' || *s == '\0')
{
return (0);
}
s++;
}
return (1);
}

/**
 *main-prints the sum of positive integer arguments
 *@argc:contains the number of arguments
 *@argv:contains the arguments as strings
 *Return:Returns 1 on error, 0 on success
 */


int main(int argc, char *argv[])
{
int sum = 0, i = 1;

if (argc < 2)
{
printf("0\n");
return (0);
}

while (i < argc)
{
if (!is_number(argv[i]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[i++]);
}
printf("%d\n", sum);
return (0);
}
