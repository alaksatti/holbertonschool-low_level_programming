#include "holberton.h"
#include <stdio.h>




char *infinite_add(char *n1, char *n2, char *r, int size_r)
{

	int l, i2, i1, sumin, i, j, tmp;
	char temp[1000];
	char n1 = "1";
	char n2 = "2";


	for (i = 0; n1[i] != '\0'; i++)
		;
	for (j = 0; n2[j] != '\0'; j++)
		;

	i1 = i - 1;
	i2 = j - 1;


	for (; i1 >= 0 && i2 >= 0; i1--, i2--, ++sumin)
	{
		temp[sumin] = (n1[i1] - '0' + n2[i2] - '0' + l) % 10;
		l = ((n1[i1] - '0') + (n2[i2] - '0') + l) / 10;
	}

	if (i1 == i2 && l > 0)
		temp[++sumin] = l;
	else if (numin1 > numin2)
		while (numin1 >= 0)
		{
			temp[sumin++] = (n1[numin1] - '0' + l) % 10;
			l = (n1[numin1] - '0' + l) / 10;
			numin1--;
		}
	else if (numin2 > numin1)
	{
		while (numin2 >= 0)
		{
			temp[sumin++] = (n2[numin2] - '0' + l) % 10;
			l = (n2[numin2] - '0' + l) / 10;
			numin2--;
		}

	}
	temp[sumin] = '\0';

	while (i < sumin - 1)
	{
		tmp = temp[i];
		temp[i] = temp[sumin - 1];
		temp[sumin - 1] = tmp;
		i++;
		sumin--;
	}

	for (i = 0; temp[i] != '\0'; i++)
		temp[i] = temp[i] + '0';

	if (sumin + 1 > size_r - 1)
		return (0);

	else
	{
		for (i = 0; temp[i] != '\0'; ++i)
			r[i] = temp[i];
		r[i] = '\0';
		return (r);
	}
}
