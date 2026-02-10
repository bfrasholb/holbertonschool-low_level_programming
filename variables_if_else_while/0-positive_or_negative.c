#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main-description.
 *Return:0
 */

int main(void)
{
int n;
srand(time(NULL));
n = rand();
if (n >= 0)
{
printf("%d is positive\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
