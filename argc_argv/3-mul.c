#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints the product of any 2 arguments, throws error if argc != 3
 * @argc: contains the number of arguments
 * @argv: contains the arguments as strings
 * Return: Returns 1 on error, 0 on success
 */

int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", num1 *num2);

	return (0);
}
