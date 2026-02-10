#include <stdio.h>

/**
 *main-description.
 *Return:0
 */

int main(void)
{
char a = 'a';
while (a <= 'z')
{
if (a != 'q' && a != 'e')
{
putchar(a);
}
a++;
}
putchar('\n');
return (0);
}
