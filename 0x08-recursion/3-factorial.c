#include "main.h"

/**
 * factorial - gets factorial of n
 * @n: integer
 *
 * Return: The factorial of the given number. Returns -1 if n is negative.
*/
int factorial(int n)
{
	if (n < 0)
		return  (-1);
	if (n == 0)
		return  (1);
	return (n * factorial(n - 1));
}
