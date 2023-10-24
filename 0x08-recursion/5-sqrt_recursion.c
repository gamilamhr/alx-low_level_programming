#include "main.h"
/**
 *  sqrt2 - Makes possible to evaluate from 1 to n
 *  @n: the number to check
 *  @i: the current number to check
 *  Return: the square root if the number is a perfect square, -1 otherwise
 **/
int sqrt2(int n, int i)
{
if (i * i == n)
{
return (i);
}
if (i * i > n)
{
return (-1);
}
return (sqrt2(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the square root if the number is a perfect square, -1 otherwise
 */

int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
