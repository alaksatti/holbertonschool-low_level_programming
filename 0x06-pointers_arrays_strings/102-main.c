#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
        char *n = "12";
        char *m = "90";
        char r[100];
        char r2[10];
        char r3[11];
        char *res;

        res = infinite_add(n, m, r, 100);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "3";
        m = "20";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        n = "87";
        m = "1";
        res = infinite_add(n, m, r2, 10);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        res = infinite_add(n, m, r3, 11);
        if (res == 0)
        {
                printf("Error\n");
        }
        else
        {
                printf("%s + %s = %s\n", n, m, res);
        }
        return (0);
}
