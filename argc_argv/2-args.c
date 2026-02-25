#include <stdio.h>

/**
*main-prints each argument passed to main on a new line.
*@argc:count of arguments
*@argv:array of arguments
*Return:returns 0
*/

int main(int argc, char *argv[])
{
int i = 0;

while (i < argc)
{
printf("%s\n", argv[i++]);
}
return (0);
}
