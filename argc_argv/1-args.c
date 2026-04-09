#include <stdio.h>

/**
 * main- prints the number of arguments passed to the function
 * @argc: index of arguments
 * @argv: null variable
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
