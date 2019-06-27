#include "holberton.H"

/**
 * _isupper- print alphabet in lowercase w/new line.
 * @c: .
 * Return: 1 if uppercase and 0 if lowercase.
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
