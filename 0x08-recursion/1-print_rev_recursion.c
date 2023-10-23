#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion-Write a function that prints a string in reverse.
 * @s: the string to print
 *
 * Return: Nothing
**/
void _print_rev_recursion(char *s)
{
    if (*s == '\0')
    {
        return;
    }
    _print_rev_recursion(s + 1);
    putchar(*s);
}

int main(void)
{
    char str[] = "Colton Walker";
    _print_rev_recursion(str);
    putchar('\n');

    return 0;
}
