#include <stdio.h>
#include <stdlib.h>

/**
 *main-prints the product of any 2 arguments, throws error if argc != 3
 *@argc:contains the number of arguments
 *@argv:contains the arguments as strings
 *Return:Returns 1 on error, 0 on success
 */

int is_number(char *s)
{
  int j = 1;
  
  while (s[j] == '\0')
    {
      if (s[j] < '0' || s[j] > '9' || s[j] == '\0')
	{
	  return (0);
	}
      j++;
    }
  return (1);
}

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
	 return(1);
       }
     sum += atoi(argv[i++]);
   }
printf("%d\n", sum);
return (0);
}
