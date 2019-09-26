#include "holberton.h"

/**
 * mod - computes the remainder of second element by top element.
 * @stack: doubly linked list representation of stack.
 * @line_number: line number.
 * Return: none.
 */
void mod(stack_t **stack, unsigned int line_number)
{

	int total;

	if (*stack && (*stack)->next)
	{
		if ((*stack)->n != 0)
			total = (*stack)->next->n % (*stack)->n;

		else
			error_message2(10, line_number, stack);

		(*stack)->n = total;
		(*stack)->next = (*stack)->next->next;

		if ((*stack)->next->next)
			(*stack)->next->next->prev = *stack;

	}

	else
		error_message2(12, line_number, stack);
}

/**
 * pchar - prints the value at the top of the stack.
 * @stack: doubly linked list representation of the stack.
 * @line_number: line number.
 * Return: None.
 */
void pchar(stack_t **stack, unsigned int line_number)
{

	if (*stack && stack)
	{
		if ((*stack)->n >= 97 && (*stack)->n <= 122)
			printf("%c\n", (*stack)->n);

		else if ((*stack)->n >= 65 && (*stack)->n <= 90)
			printf("%c\n", (*stack)->n);

		else
			error_message2(13, line_number, stack);
	}

	else
		error_message(14, line_number, stack);

}
/**
 * pstr - prints string from elements in stack.
 * @line_number: linenumber
 * @stack: doubly linked list.
 * Return: None.
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *copy = *stack;
	(void)line_number;


	if (*stack && stack)
	{
		while (copy && (copy)->n != 0)
		{
			if ((copy)->n >= 97 && (copy)->n <= 122)
				printf("%c", (copy)->n);

			else if ((copy)->n >= 65 && (copy)->n <= 90)
				printf("%c", (copy)->n);

			copy  = (copy)->next;
		}
		printf("\n");
	}
	else
		printf("\n");

}

/**
 * rotl - rotates first element to last and second.
 * @stack: odubly linked list representation of stack.
 * @line_number: line number.
 * Return: nothing.
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	int n = (*stack)->n;

	pop(stack, line_number);

	push_back_rotl(stack, n);
}

/**
 * push_back_rotl - pushes function to end of stack/queue.
 * @stack: doubly linked representation of stack/queue.
 * @n: line number..
 * Return: nothing.
 */
void push_back_rotl(stack_t **stack, int n)
{
	stack_t *nodescanner = *stack, *newnode;

	newnode = malloc(sizeof(stack_t));


	if (newnode)
	{
		newnode->n = n;
		newnode->next = NULL;

		if (!*stack)
		{
			*stack = newnode;
			newnode->prev = NULL;
		}

		while (nodescanner && nodescanner->next)
		{
			nodescanner = nodescanner->next;
		}

		newnode->prev = nodescanner;
		nodescanner->next = newnode;
	}

}
