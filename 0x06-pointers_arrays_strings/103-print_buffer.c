#include <stdio.h>
void print_buffer(char *b, int size)
{

	int i, j;

	if (size <= 0)
		putchar('\n');

	for (i = 0; i <= size; i++)
		{
			if (((b[i] >= 'A' || b[i] >= 'a') && (b[i] <= 'z'
|| b[i] <= 'Z')) || b[i] == '!' || b[i] == '#' || b[i] == '$' || b[i] == '%'
|| b[i] == '*' || b[i] == ')' || b[i] == ':' || b[i] == ';' || b[i] == '&'
|| b[i] == '(' || b[i] == '&')
				printf("%c\n", b[i]);
			else
				printf(".\n");
		}

}
