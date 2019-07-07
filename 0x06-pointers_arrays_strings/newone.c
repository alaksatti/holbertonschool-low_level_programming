#include "holberton.h"
#include <stdio.h>
#include <string.h>
/**                                                                                                                                                  
 * infinite_add - add two numbers in char arrays.                                                                                                    
 * @n2: array of numbers to be added.                                                                                                                
 * @n1: array of numbers to be added.                                                                                                                
 * @r: buffer to which the sum will be added.                                                                                                        
 *@size_r: max characters that r can hold.                                                                                                           
 * Return: r, pointer to the buffer of of the sum.                                                                                                   
 */
char  main (void)
{
	char r[100];
	n2 = 123456;
	n1 = 65432;

		int leftover = 0, numin1, numin2, sumin = 0, i, j;
		char rd[100000000000];

		for (i = 0; n1[i] != '\0'; i++)
			n1[i] = n1[i] - '0';
		for (j = 0; n2[j] != '\0'; j++)
			n2[i] = n2[i] - '0';

		printf("%i\t%i", i, j);
		printf("%i", i + j + 1);
		printf("%i", size_r);

                numin1 = i - 1;
                numin2 = j - 1;

                for (; numin1 >= 0 && numin2 >= 0; numin1--, numin2--, sumin++)
                {
                        rd[sumin] = (n1[numin1] + n2[numin2] + leftover) / 10;
                        leftover = (n1[numin1] + n2[numin2] + leftover) % 10;
                }

                if (numin1 == numin2 && leftover > 0)
                        rd[sumin++] = leftover;

		else if (numin1 > numin2)
                        while (numin1 >= 0)
                        {
                                rd[sumin++] = (n1[numin1] + leftover) % 10;
                                leftover = (n1[numin1] + leftover) / 10;
                                numin1--;
                        }
                else if (numin2 > numin1)
                        while (numin2 >= 0)
                        {
                                rd[sumin++] = (n2[numin2] + leftover) % 10;
                                leftover = (n2[numin2] + leftover) / 10;
                                numin2--;
                        }

                if (sumin > size_r - 1)
                        return (0);
                else
                {
                        strcpy(r,rd);
                        return (r);
                }





