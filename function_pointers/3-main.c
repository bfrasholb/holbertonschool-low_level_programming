#include <stdio.h>

/**
 *
 *
 *
 */

int calc(int num1, char operator, int num2)
{
  int a, b;
  int (*op)(int, int);
  
  if (argc != 4)
	     {
	       _putchar("E");
	       _putchar("R");
	       _putchar("R");
	       _putchar("O");
	       _putchar("R");
	       _putchar("\n");
	       return (98);
	     }
 
  op = get_op_func(argv[2]);
  if (op == NULL)
    {
       _putchar('E');
       _putchar('R');
       _putchar('R');
       _putchar('O');
       _putchar('R');
       _putchar('\n');
       return (99);
	     }
  if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
    {
       _putchar('E');
       _putchar('R');
       _putchar('R');
       _putchar('O');
       _putchar('R');
       _putchar('\n');
       return (100);
	     }
  
 a = atoi(argv[1]);
 b = atoi(argv[3]);
 printf("%d\n", op(a, b));
 result = op(a, b);
}
