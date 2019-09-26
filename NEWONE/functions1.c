#include "holberton.h"

/**
 * push - pushes an element to beginning of stack.
 * @stack: doubly linked list representation fo stack.
 * @line_number: number of lines.
 *Return: nothing.
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *newnode;

	if (!global_var.args || !atoi(global_var.args))
		error_message(3, line_number);


	newnode = malloc(sizeof(stack_t));


	if (newnode)
	{

		newnode->n = atoi(global_var.args);
		newnode->next = *stack;
		newnode->prev = NULL;

		if (*stack)
			(*stack)->prev = newnode;


		(*stack) = newnode;

	}


}


/**
 * pall - prints stack elements.
 * @line_number: line number.
 * @stack: doubly linked list reoresentation of stack.
 * Return: nothing.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *copy = *stack;


	if (!copy)
		nop(stack, line_number);

	while (copy)
	{
		printf("%i\n", (copy)->n);
		copy = (copy)->next;

	}

}
/**
 * nop - does nothing.
 * @stack: doubly linked list representation of stack.
 * @line_number: line number.
 * Return: nothing.
 */
void nop(stack_t **stack, unsigned int line_number)
{
	(void)**stack;
	(void)line_number;

}
/**
 * pop - removes top element in stack.
 * @stack: doubly linked representation f stack.
 * @line_number: line number.
 * Return: Nothing.
 */
void pop(stack_t **stack, unsigned int line_number)
{

	stack_t  *nodescanner = *stack;

        if (*stack && stack)
        {

		*stack = nodescanner->next;

		if (nodescanner->next)
			nodescanner->next->prev = nodescanner->prev;

		free(nodescanner);
	}

	else
		error_message(4, line_number);

}


/**
 * pint - prints the value at the top of the stack.
 * @stack: doubly linked list representation of the stack.
 * @line_number: line number.
 *Return: Nothing
 */
void pint(stack_t **stack, unsigned int line_number)
{

        if (*stack && stack)
		printf("%i\n", (*stack)->n);


        else
                error_message(5, line_number);

}
