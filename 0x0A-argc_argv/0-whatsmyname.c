#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc : counts the namber of parmeters that go into main
 * @argv : is a one-dimensional array of strings into main
 * Return : 0 if the program executed successfully, otherwise non-zero
**/
int main(int argc, char **argv)
{
	if (argc > 1)
		printf("%s \n", argv[1]);
	return (0);
}
