#include "main.h"

/**
 *
 *
 *
 */

void times_table(void)
{
int a = 0;
	while (a <= 9)
	{
		int b = 0;
		while (b <= 9)
		{
			int c = a * b;
			if (b == 0)
				{
				  _putchar(c + '0');
				}
			else
				{
				_putchar(',');
				_putchar(' ');
				if (c < 10)
					{
					  _putchar(' ');
					}
				else
				  {
				    _putchar((c / 10) + '0');
				    _putchar((c % 10) + '0');
				  }
				b++;
				}
		}
	       	_putchar('\n');
       		a++;
		
	}
}
