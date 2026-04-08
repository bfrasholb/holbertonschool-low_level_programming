#include <stdio.h>

/**
 * main- prints the digits of base 10
 * Return: always 0
 */

int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a + '0');
		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}

	putchar('\n');
	return (0);
}
