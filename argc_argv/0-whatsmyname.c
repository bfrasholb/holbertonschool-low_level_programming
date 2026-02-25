#include <stdio.h>

/**
 *main-prints the function name.
 *@argc:null variable
 *@argv:pointer array containing pointer to path name
 *Return:returns 0
 */

int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
