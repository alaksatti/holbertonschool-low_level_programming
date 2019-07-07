#include "holberton.h"
#include <stdio.h>


/**
 * _strcpy - copies one string into another.
 * @dest: buffer to which string will be copied.
 * src: string to be copied.
 * Rerturn: pointer to buffer.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * infinite_add - add two char arrays.
 * @n2: array of numbers to be added.
 * @n1: array of numbers to be added.
 * @r: buffer to which the sum will be added.
 *@size_r: max characters that r can hold.
 * Return: r, pointer to the buffer of of the sum.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int leftover = 0, numin1, numin2, sumin = 0, i, j;
	char t[99999999999];

	for (i = 0; n1[i] != '\0'; i++)
		n1[i] = n1[i] - '0';
	for (j = 0; n2[j] != '\0'; j++)
		n2[i] = n2[i] - '0';

		numin1 = i - 1;
		numin2 = j - 1;

		for (; numin1 >= 0 && numin2 >= 0; numin1--, numin2--, ++sumin)
		{
			t[sumin] = (n1[numin1] + n2[numin2] + leftover) / 10;
			leftover = (n1[numin1] + n2[numin2] + leftover) % 10;
		}
		if (numin1 == numin2 && leftover > 0)
			t[sumin++] = leftover;
		else if (numin1 > numin2)
			while (numin1 >= 0)
			{
				t[sumin++] = (n1[numin1] + leftover) % 10;
				leftover = (n1[numin1] + leftover) / 10;
				numin1--;
			}
		else if (numin2 > numin1)
			while (numin2 >= 0)
			{
				t[sumin++] = (n2[numin2] + leftover) % 10;
				leftover = (n2[numin2] + leftover) / 10;
				numin2--;
			}
		if (sumin + 1 > size_r - 1)
			return (0);


		else
		{
			for (i = 0; i <= sumin; i++)
				t[i] = t[i] + '0';
			t[i] = '\0';
			_strcpy(t, r);
			return (r);
		}
}
