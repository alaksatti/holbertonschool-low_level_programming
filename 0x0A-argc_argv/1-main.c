/**                                                                                                              
 *_isdigit - checks for digit.                                                                                   
 * @c: digit to be checked.                                                                                      
 * Return: 1 if c is a digit otherwise return 0.                                                                 
 */


int _isdigit(int c)
{
if (c >= '0' && c <= '9')
	return (1);
else
	return (0);
}

#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	c = '100';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
