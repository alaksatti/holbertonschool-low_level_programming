#include "holberton.h"

/**
 *rot13 - Encodes a string using rot13.
 *@s: string to be encoded.
 *Return:pointer to string.
 */



char *rot13(char *s)
{
	char orderedlet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwx\
yz";

	char revorderedlet[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefgh\
ijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; ++i)
		for (j = 0; orderedlet[j] != '\0'; ++j)
			if (s[i] == orderedlet[j])
				s[i] = revorderedlet[j];
	return (s);

}
