#include "holberton.h"


/**
 * error_message - displays error message to standard error.
 * @i: number associated with error_message.
 * @line_number: line number.
 * @stack: linked list representation.
 * Return: Nothing.
 */
void error_message(int i, unsigned int line_number, stack_t **stack)
{
	if (i == 0)
		fprintf(stderr, "USAGE: montly file\n");

	if (i == 1)
		fprintf(stderr, "Error: Can't open file %s\n", global_var.name);
	if (i == 2)
		fprintf(stderr, "L%u: unknown instruction %s\n", line_number,
				global_var.opcode);
	if (i == 3)
		fprintf(stderr, "L%u: usage: push integer\n", line_number);

	if (i == 4)
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	if (i == 5)
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);

	if (i == 6)
		fprintf(stderr, "L%u: can't swap, stack too short\n",
				line_number);

	if (i == 7)
		fprintf(stderr, "L%u: can't add, stack too short\n",
				line_number);

	free_all(stack);


	exit(EXIT_FAILURE);

}
/**
 * error_message2 - prints error messages.
 * @i: error message number.
 * @line_number: line number.
 * @stack: linked list representation.
 * Return: nothing.
 */
void error_message2(int i, unsigned int line_number, stack_t **stack)
{

	if (i == 8)
		fprintf(stderr, "L%u: can't sub, stack too short\n",
				line_number);

	if (i == 9)
		fprintf(stderr, "L%u: can't div, stack too short\n",
				line_number);
	if (i == 10)
		fprintf(stderr, "L%u: division by zero\n",
				line_number);
	if (i == 11)
		fprintf(stderr, "L%u: can't mul, stack too short\n",
				line_number);

	if (i == 12)
		fprintf(stderr, "L%u: can't mod, stack too short\n",
				line_number);

	if (i == 13)
		fprintf(stderr, "L%u: can't pchar, value out of range\n",
				line_number);

	if (i == 14)
		fprintf(stderr, "L%u: can't pchar, stack too short\n",
				line_number);

	free_all(stack);
	exit(EXIT_FAILURE);
}
