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
	if (end - 1 < start)
		return (1);
	if (s[start] == s[end])
		return (rev_string_check(s, n, start + 1, end - 1));
	else
		return (0);
}


/**
 * _strlen - finds the length of a string.
 *@s: string passed.
 * Return: length of string.
 */
char _strlen(char *s)
{
	if (*s)
		return (1 + _strlen(++s));
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
	return (rev_string_check(s, _strlen(s) - 1, 0, _strlen(s) - 1));

}
