#include "main.h"

/**
*malloc_checked- allocates b bytes of memory
*@b:an integer
*Return: 98 on error, address on success
*/

void *malloc_checked(unsigned int b)
{
void *mem;

mem = malloc(b);
if (mem == NULL)
{
exit(98);
}
return (mem);
}
