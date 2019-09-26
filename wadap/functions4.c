#include "holberton.h"

/**
 * push_back - pushes element to queue.
 * @line_number: ;line number.
 * @stack: doubly linked lis representation of queue.
 * Return: Nothing.
 */

void push_back(stack_t **stack, unsigned int line_number)
{
        stack_t *nodescanner = *stack, *newnode;

	if (!global_var.args)
                error_message(3, line_number, stack);


	if (*global_var.args != '0' && !atoi(global_var.args))
                error_message(3, line_number, stack);

        newnode = malloc(sizeof(stack_t));

        if (newnode)
        {
                newnode->n = atoi(global_var.args);
                newnode->next = NULL;

                if (!*stack)
                {
			*stack = newnode;
                        newnode->prev = NULL;
			return;
                }

                while (nodescanner && nodescanner->next)
                {
                        nodescanner = nodescanner->next;
                }

                newnode->prev = nodescanner;
                nodescanner->next = newnode;
        }

}

/**
 * rotr - rotates last element to the first.
 * @stack: doubly linked list representation of linked list.
 * @line_number:  line number.
 * Return: Nothing.
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *nodescanner = *stack;
	char s[10];

	while (nodescanner && nodescanner->next)
		nodescanner = nodescanner->next;

	global_var.args = iditoa(nodescanner->n, s);

	push(stack, line_number);

	pop_end(stack, line_number);
}


/**
 * pop_end - pops end of stack.
 * @line_number: line number.
 * @stack: doubly linked list representation of stack.
 * Return: nothing.
 */
void pop_end(stack_t **stack, unsigned int line_number)
{
	stack_t  *nodescanner = *stack, *prevnode;

	if (stack || !*stack)
		nop(stack, line_number);
        if (*stack && stack)
        {
		while(nodescanner->next->next)
			nodescanner = nodescanner->next;

		prevnode = nodescanner->next;
		free(prevnode);
		nodescanner->next = NULL;

        }
}
/**
 * iditoa - converts integer to string.
 * @n: integer to be converted
 * Return: char pointer.
 */
char *iditoa(int n, char *s)
{
	int neg, i = 0, r;

        if (n == 0)
        {
                s[0] = '0';
                s[1] = '\0';
        }

        if (n < 0)
        {
                neg = 1;
                n = -n;
        }
        while (n > 0)
        {
                r = n % 10;
                s[i] = r + '0';
                n = n / 10;
                i++;
        }
        if (neg == 1)
                s[i] = '-';
	s[i] = '\0';

	reverse(s);

	return (s);

}
/**
 * reverse - reverses a string.
 * @s: reverses a string.
 * Return: pointer.
 */
char *reverse(char *s)
{
        char tmp;
        int i, l;

        for (l = 0; s[l] != '\0'; l++)
                ;
        l = l - 1;
        for (i = 0; i < l; i++, l--)
        {
                tmp = s[i];
                s[i] = s[l];
                s[l] = tmp;
        }
        return (s);
}
