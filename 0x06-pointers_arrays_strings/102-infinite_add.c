#include "holberton.h"
#include <stdio.h>

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
	int l = 0; /** number to be carried **/
	int numin1; /**index of n1**/
	int numin2; /**index of n2**/
	int sumin = 0; /*index of temp[] **/
	int i; /**count of n1**/
	int j; /**count of n2**/
	char temp[1000]; /**temp array holding the result*/
	int tmp, count = 0;

	for (i = 0; n1[i] != '\0'; i++)
		;
	for (j = 0; n2[j] != '\0'; j++)
		;

	numin1 = i - 1;
	numin2 = j - 1;

	for (; numin1 >= 0 && numin2 >= 0; numin1--, numin2--, ++sumin, count++)
	{
		temp[sumin] = (n1[numin1] - '0' + n2[numin2] - '0' + l) % 10;
		l = ((n1[numin1] - '0') + (n2[numin2] - '0') + l) / 10;
	}

	if (numin1 == numin2 && l > 0)
	{
		temp[sumin++] = l;
		count++;
	}

	else if (numin1 > numin2)
		while (numin1 >= 0)
		{
			temp[sumin++] = (n1[numin1] - '0' + l) % 10;
			l = (n1[numin1] - '0' + l) / 10;
			numin1--;
			count++;
		}
	else if (numin2 > numin1)
		while (numin2 >= 0)
		{
			temp[sumin++] = (n2[numin2] - '0' + l) % 10;
			l = (n2[numin2] - '0' + l) / 10;
			numin2--;
			count++;
		}

	temp[sumin] = '\0';

	for (i = 0; i < count; i++)
	{
		tmp = temp[i];
		temp[i] = temp[count - 1];
		temp[count - 1] = tmp;
		count--;
	}

	for (i = 0; temp[i] != '\0'; i++)
		printf("%i", temp[i]);

	if (sumin + 1 > size_r - 1)
		return (0);

	for (i = 0; temp[i] != '\0'; i++)
	{
		r[i] = temp[i] + '0';
	}
	r[i] = '\0';

	return (r);

}
