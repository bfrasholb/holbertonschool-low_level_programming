#include <stdio.h>
#include <stdlib.h>

/**
 *main-prints the product of any 2 arguments, throws error if argc != 3
 *@argc:contains the number of arguments
 *@argv:contains the arguments as strings
 *Return:Returns 1 on error, 0 on success
 */

int main(int argc, char *argv[])
{
  int num, sum = 0, i = 0;

if (argc < 2)
{
printf("0\n");
return (1);
}

 while (i < argc)
   {
     num = atoi(argv[i]);
     sum += num;
     i++;
   }
 
printf("%d\n", sum);

return (0);
}
