#ifndef MONTY
#define MONTY
#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *  struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
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
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/*External Variable 'Value' Declaration*/
extern int value[];

/*functions checking failures [failurechecks.c]*/
void check_argc(int argc);
void check_valid_file(char *filename);
void check_file_stream(FILE *fp, char *filename);
void check_opcode(void (*opcode)(), int lineno, char *cmd);
void check_fail(char *line, FILE *fp, stack_t *head);

/*Functions that perform LIFO and FIFO operations in Doubly Linked List (Stack) [stackfunctions1.c] */
int add_to_stack(stack_t **head, int n);
void free_stack(stack_t *head);
int delete_stack_head(stack_t **head);
int delete_stack_end(stack_t **head);
int print_stack(stack_t **head);

/*stackfunctions2.c */
int add_to_queue(stack_t **head, int n);

/*Function to get Operation codes*/
void (*get_opcode_func(char *s))(stack_t **stack, unsigned int ln);

/*Program Utilities [utilities.c]*/
int check_if_number(char *str);
int check_if_push(char **tok_line, int lineno);
int is_ascii(int c);
void check_data_structure(char *opcode);

/*Core Operations to Monty Stack [operationcode_functions1.c]*/
void stk_push(stack_t **stack, unsigned int ln);
void stk_pall(stack_t **stack, unsigned int ln);
void stk_pop(stack_t **stack, unsigned int ln);
void stk_add(stack_t **stack, unsigned int ln);
void stk_pint(stack_t **stack, unsigned int ln);

/*Core Operations Continuation [operationcode_functions2.c]*/
void stk_swap(stack_t **stack, unsigned int ln);
void stk_nop(stack_t **stack, unsigned int ln);
void stk_pchar(stack_t **stack, unsigned int ln);
void stk_pstr(stack_t **stack, unsigned int ln);

/*Core Operations Continuation [operationcode_functions3.c]*/
void stk_rotl(stack_t **stack, unsigned int ln);
void stk_rotr(stack_t **stack, unsigned int ln);
void stk_stack(stack_t **stack, unsigned int ln);
void stk_queue(stack_t **stack, unsigned int ln);

/*Core Operations Continuation [operationcode_functions4.c]*/
void stk_sub(stack_t **stack, unsigned int ln);
void stk_div(stack_t **stack, unsigned int ln);
void stk_mul(stack_t **stack, unsigned int ln);
void stk_mod(stack_t **stack, unsigned int ln);

/*Checking Input Strings [string_utilities.c]*/
int tokenize_line(char *s, char *tokens[]);
void clear_strings(char *tokens[]);
int check_empty(const char *s);
int check_if_comment(char **token);

#endif
