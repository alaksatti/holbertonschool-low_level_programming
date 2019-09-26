#ifndef HOlBERTON_H
#define HOLBERTON_H


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct global_s - golbal vars.
 * @opcode: opcode
 * @line: buffer for getline.
 * @fp: File pointer.
 *
 * Description: Global vars for easy access.
 */

typedef struct global_s
{
	char *opcode;
	char *args;
	char *line;
	FILE *fp;
	char *name;


}global_t;

extern global_t global_var;

int opcode_finder(stack_t **stack_q, unsigned int line_number);
void parser(void);
void read_file(char *args);
void free_all(stack_t **stack_q);
void error_message(int i, unsigned int line_number);
void error_message2(int i, unsigned int line_number);
void initialize_global_vars(void);
void tokenize(void);



/* functions1.c */
void pint(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);



/* functions2.c*/
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void divis(stack_t **stack, unsigned int line_number);




#endif
