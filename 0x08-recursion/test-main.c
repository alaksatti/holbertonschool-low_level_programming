#include "holberton.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
        int r, i;

        r = _sqrt_recursion(INT_MAX);
        printf("%d\n", r);
        r = _sqrt_recursion(1024);
        printf("%d\n", r);
        r = _sqrt_recursion(16);
        printf("%d\n", r);
        r = _sqrt_recursion(17);
        printf("%d\n", r);
        r = _sqrt_recursion(25);
        printf("%d\n", r);
        r = _sqrt_recursion(-1);
        printf("%d\n", r);


        for (i = -5; i < 100; i++)
        {
                r = _sqrt_recursion(i);
                printf("%d: %d\n", i, r);
        }

        return (0);
}
