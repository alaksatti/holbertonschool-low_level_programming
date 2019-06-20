#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabet in lowercase w/new line.
 * Description: print all alphabet letters  != q and e.
 * Return: 0 if completed succesfully.
 */

int main(void)
{
	char i;

	for (i = 97; i <= 122; ++i)
		if(i != 101 && i != 113)
			putchar(i);
	putchar ('\n');
	return (0);
}
