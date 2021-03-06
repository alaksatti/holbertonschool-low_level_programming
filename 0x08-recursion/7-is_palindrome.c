#include "holberton.h"

/**
 * rev_string_check - reverses given string.
 * @s: string passed
 * @n: string length.
 * @end: end of string.
 * @start: Beginning of string.
 * Return: reversed string.
 */

int rev_string_check(char *s, int n, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	else
		return (rev_string_check(s, n, start + 1, end - 1));

}


/**
 * _strlen - finds the length of a string.
 *@s: string passed.
 * Return: length of string.
 */
int _strlen(char *s)
{
	if (s[0])
		return (1 + _strlen(s + 1));
	else
		return (0);
}




/**
 * is_palindrome - checks if string is a palindrome.
 * @s: string passed.
 * Return: 1 if palindrome, 2 if not.
 */

int is_palindrome(char *s)
{
	if (s[0] == '\0')
		return (1);

	return (rev_string_check(s, _strlen(s), 0, _strlen(s) - 1));

}
