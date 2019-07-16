#include <stdlib.h>


/**
 * _strdup - returns pointer to memory containing copy of string.
 * @str: string to be copied.
 * Return: null if str is null otherwise return pointer.
 */

char *_strdup(char *str)
{

	*arr = NULL;
	unsigned int i;



	if (str)
	{
		for (i = 0; str[i] != '\0'; ++i)
			;

		arr = (char *)malloc(sizeof(char) * i + 1);

	}

	if (arr)
	{
		for (i = 0; str[i] != 0; i++)
			arr[i] = str[i];
		arr[i] = '\0';
	}

	return (arr);




}
