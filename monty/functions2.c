#include "holberton.h"


/**
 * swap - swaps the top two elements in the stack.
 * @stack: doubly linked list representation of the stack.
 * @line_number: line number.
 * Return: nothing.
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int temp;


	if (*stack && (*stack)->next)
	{
		temp = (*stack)->n;

		(*stack)->n = (*stack)->next->n;

		(*stack)->next->n = temp;

	}

	else
		error_message(6, line_number, stack);

}



/**
 * add - adds the top two elements of the stack.
 * @stack: doubly linked list representation of the stack.
 * @line_number: line number.
 * Return: nothing.
 */

void add(stack_t **stack, unsigned int line_number)
{
	int total;

	if (*stack && (*stack)->next)
	{
		total = (*stack)->n + (*stack)->next->n;

		(*stack)->n = total;
		(*stack)->next = (*stack)->next->next;

		if ((*stack)->next->next)
			(*stack)->next->next->prev = *stack;
	}

	else
		error_message(7, line_number, stack);

}


/**
 * sub - adds the top two elements of the stack.
 * @stack: doubly linked list representation of the stack.
 * @line_number: Line number.
 * Return: nothing.
 */

void sub(stack_t **stack, unsigned int line_number)
{
	int total;

	if (*stack && (*stack)->next)
	{
		total = (*stack)->next->n - (*stack)->n;

		(*stack)->n = total;
		(*stack)->next = (*stack)->next->next;

		if ((*stack)->next->next)
			(*stack)->next->next->prev = *stack;
	}

	else
		error_message2(8, line_number, stack);

}

/**
 * divis - divides the second element by the first element of the stack.
 * @stack: doubly linked list representation of the stack.
 * @line_number: line_number.
 * Return: Nothing.
 */
void divis(stack_t **stack, unsigned int line_number)
{
	int total;

	if (*stack && (*stack)->next)
	{
		if ((*stack)->n != 0)
			total = (*stack)->next->n / (*stack)->n;

		else
			error_message2(10, line_number, stack);

		(*stack)->n = total;
		(*stack)->next = (*stack)->next->next;

		if ((*stack)->next->next)
			(*stack)->next->next->prev = *stack;



	}

	else
		error_message2(9, line_number, stack);

}
/**
 * mult - multiplues the two two elements in the stack
 * @stack: doubly linked list representation of stack.
 * @line_number: line number.
 * Return: none.
 */
void mult(stack_t **stack, unsigned int line_number)
{

	int total;

	if (*stack && (*stack)->next)
	{
		total = (*stack)->next->n * (*stack)->n;

		(*stack)->n = total;
		(*stack)->next = (*stack)->next->next;

		if ((*stack)->next->next)
			(*stack)->next->next->prev = *stack;
	}

	else
		error_message2(11, line_number, stack);

}
