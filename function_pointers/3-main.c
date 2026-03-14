#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
*main-performs operations on two integers
*@argc:number of CLI args
*@argv:array of pointers to arg strings
*Return: 0
*/

int main(int argc, char *argv[])
{
int a, b, result;
int (*op)(int, int);

if (argc != 4)
{
printf("Error\n");
return (98);
}

op = get_op_func(argv[2]);
if (op == NULL)
{
printf("Error\n");
return (99);
}
if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
{
printf("Error\n");
return (100);
}

a = atoi(argv[1]);
b = atoi(argv[3]);
result = op(a, b);
printf("%d\n", result);
return (0);
}
