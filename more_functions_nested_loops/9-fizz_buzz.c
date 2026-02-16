#include <stdio.h>

/**
 *main-description
 *Return:0 when complete.
 */

int main(void)
{
int i = 1;
while (i <= 100)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
i++;
}
if (i % 3 == 0)
{
printf("Fizz ");
i++;
}
if (i % 5 == 0)
{
printf("Buzz ");
i++;
}
else
{
printf("%d ", i);
i++;
}
}
printf("\n");
return (0);
}
