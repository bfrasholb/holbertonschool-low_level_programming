#include <stdio.h>

/**
 *main-description.
 *Return:0
 */

int main(void)
{
char a = 0;
while (a < 16)
{
if (a <10)
{
putchar(a + 48);
}
else
{
putchar(a - 10 + 'a');
}
a++;
}
putchar('\n');
return (0);
}
