#include "holberton.h"


/**
 * tokenize - tokenizes opcode.
 * @line: buffer containing untokenized opcode.
 * Return: double pointer to tokenized opcode.
 */
void tokenize(void)
{
	char token[3] = "nop";
	char copy[3];
	int i;


	printf("ENTERS TOKENIZE\n");

	global_var.opcode = strtok(global_var.line, " \n\t");

	printf("STRTOK COMPLETE %s\n", global_var.opcode);

	if (!global_var.opcode || global_var.opcode[0] == '#')
	{

		for (i = 0; token[i]; i++)
			copy[i]  = token[i];

		global_var.opcode  = copy;


		printf("ENTERS IF IN TOKENIZE\n");
	}

	global_var.args = strtok(NULL, " \t\n");
}
