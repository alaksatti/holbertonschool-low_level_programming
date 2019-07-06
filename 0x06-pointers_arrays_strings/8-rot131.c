#include "holberton.h"


/**
 * rot13 - Encodes a string using rot13.
 * @s: string to be encoded.
 * Return: Pointer to string.
 */

char *rot13(char *s)
{
	int i,j;
	char let[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char inv[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
