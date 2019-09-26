#include "holberton.h"

global_t global_var = {NULL, NULL, NULL, NULL, NULL};

/**
 * main - main file for stacks.
 * @ac: number of arguments.
 * @av: argument strings.
 * Return: EXIT_FAILURE, EXIT_SUCCESS.
 */

int main(int ac, char **av)
{
	printf("Enters HERE\n");

	if (ac != 2)
	{
		error_message(0, 0);
		exit(EXIT_FAILURE);
	}

	global_var.name = av[1];

	read_file(av[1]);

	parser();

	return (EXIT_SUCCESS);
}

/**
 * read_file - reads file.
 * @args: file to be opened and read.
 * Return: EXIT FAILURE upon failure or pointer to file.
 */

void read_file(char *args)
{
	printf("READS FILE BEGINNING\n");
	global_var.fp = fopen(args, "r");

	if (!global_var.fp)
	{
		error_message(1, 0);
		exit(EXIT_FAILURE);
	}
	printf("READS FILE END\n");

}

/**
 * parser - parses command with corresponding function.
 * Return: None.
 */

void parser(void)
{
	size_t len = 0;
	ssize_t chars_read = 0;
	stack_t *stack_q = NULL;
	unsigned int line_number = 1;

	printf("ENTERS PARSER BLOCK\n");

	while (1)
	{
		printf("ENTERS PARSER WHILE LOOP\n");

		chars_read = getline(&global_var.line, &len, global_var.fp);

		if (chars_read == -1)
			break;

		printf("SENDING TO TOKENIZE\n");

		tokenize();

		printf("%s SENT TO OPCODE_FINDER with args %s  Line # %u\n", global_var.opcode, global_var.args, line_number);

		opcode_finder(&stack_q, line_number);

		line_number++;

		printf("----------------------\n\n");

	}

	free_all(&stack_q);

}


/**
 * opcode_finder - Sends opcode to its respective function for executiion
 * @stack_q: doubly linked list of stack/queue.
 * Return: None.
 */
int opcode_finder(stack_t **stack_q, unsigned int line_number)
{
	int i = 0;

	instruction_t parser[] = {
		{"push", push},
		{"pall", pall},
		{"nop", nop},
		{"pop", pop},
		{"", nop},
		{"pint", pint},
		{"swap", swap},
		{"add", add},
		{"sub", sub},
		{"div", divis},
/**
		{"sub" sub},
		  {"sub", sub}
		  {"div", div}
		  {"mul", mul}
		  {"mod", mod}
		  {"pchar", pchar}
		  {"pstr", pstr}
		  {"rotl", rotl}
		  {"rotr", rotr}
		  {"stack", stack}
		  {"queue", queue},
		  {"", nop},
		 **/
		{NULL, NULL}
	};

	printf("%s ENTERS OPCODE_FINDER\n", global_var.opcode);

	while (parser[i].opcode)
	{
		if (!strcmp(global_var.opcode, parser[i].opcode))
		{
			parser[i].f(stack_q, line_number);
			return (0);
		}

		i++;
	}
	printf("OPCODE NOT FOUND\n");
	if (!parser[i].opcode)
	{
		error_message(2, line_number);
		free_all(stack_q);
		exit(EXIT_FAILURE);
	}
	return (1);
}

/**
 * free_all - frees all pointers, closes file pointer.
 * @stack_q: doubly linked list to be freed.
 * Return: None.
 */

void free_all(stack_t **stack_q)
{
	stack_t *current_stack = *stack_q;


	printf("ENTERS FREE_ALL\n");

	if (global_var.line)
		free(global_var.line);

	if (*stack_q)
		while (*stack_q)
		{

			free(current_stack);

			*stack_q = (*stack_q)->next;

			current_stack = *stack_q;
		}

	fclose(global_var.fp);
}
