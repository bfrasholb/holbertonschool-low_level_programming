#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- generates a random number, prints if it is 0/+/-
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	if (n <= 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
