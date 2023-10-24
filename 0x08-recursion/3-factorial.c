#include <main.h>
/**
 * factorial - get factorial n
 *
 * Return : on success 1
**/
int factorial(int n)
{
	if (n < 0)
		return  (-1);
	if (n == 0)
		return  (1);
	return(n * factorial (n - 1));
}
