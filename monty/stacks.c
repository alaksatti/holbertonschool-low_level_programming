#include "holberton.h"

global_t global_var = {NULL, NULL, NULL, NULL, NULL, 0, 1};

/**
 * main - main file for stacks.
 * @ac: number of arguments.
 * @av: argument strings.
 * Return: EXIT_FAILURE, EXIT_SUCCESS.
 */

int main(int ac, char **av)
{

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: montly file\n");
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

	global_var.fp = fopen(args, "r");

	if (!global_var.fp)
	{
		fprintf(stderr, "Error: Can't open file %s\n", global_var.name);
		exit(EXIT_FAILURE);
	}

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

	while (1)
	{
		chars_read = getline(&global_var.line, &len, global_var.fp);

		if (chars_read == -1)
			break;

		tokenize();

		opcode_finder(&stack_q, line_number);

		line_number++;

	}

	free_all(&stack_q);

}


/**
 * opcode_finder - Sends opcode to its respective function for executiion
 * @stack_q: doubly linked list of stack/queue.
 * @line_number: line number.
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
		{"pint", pint},
		{"swap", swap},
		{"add", add},
		{"sub", sub},
		{"div", divis},
		{"mul", mult},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{"queue", mode_q},
		{"stack", mode_s},
		{"", nop},
		{NULL, NULL},
	};
	while (parser[i].opcode)
	{
		if (!strcmp(global_var.opcode, parser[i].opcode))
		{
			parser[i].f(stack_q, line_number);
			return (0);
		}

		i++;
	}
	if (!parser[i].opcode)
	{
		error_message(2, line_number, stack_q);
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
