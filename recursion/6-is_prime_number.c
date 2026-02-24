#include "main.h"
#include <stdio.h>

/**
*check_prime-checks if n is divisible by the series 2+1+1...+
*@n:an integer
*@d:a series of 2+1...+
*Return:returns 1 if prime, else 0
*/

int check_prime(int n, int d)
{
if (d * d > n)
{
return (1);
}
if (n % d == 0)
{
return (0);
}
return (check_prime(n, d + 1));
}

/**
*is_prime_number-calls function check_prime or returns 0 if n <=1
*@n:an integer
*Return: returns 0 if not prime, else 1
*/

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (check_prime(n, 2));

}
