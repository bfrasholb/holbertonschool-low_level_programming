#include "main.h"

/**
 * _islower- checks if a letter is lower case
 * @c: ASCII code value
 * Return: 1 if lower, 0 if !lower
 */

int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
