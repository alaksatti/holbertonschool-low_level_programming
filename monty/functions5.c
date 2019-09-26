#include "holberton.h"


/**
 * mode_q - changes mode to queue.
 * @line_number: line number.
 * @stack: doubly linked list representation of queue.
 * Return: Nothing.
 */
void mode_q(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	global_var.stack = 0;
	global_var.queue = 1;
}

/**
 * mode_s - changes mode to stack.
 * @line_number: line number.
 * @stack: doubly linked list representation of stack.
 * Return: Nothing.
 */
void mode_s(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;

	global_var.stack = 1;
	global_var.queue = 0;
}
