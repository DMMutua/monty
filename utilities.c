#include "monty.h"

/**
 * check_if_number - checks if a string is a number string
 * @str: string to check
 * Return: 1 if true or 0 if not a number string
 */
int check_if_number(char *str)
{
	int i;

	if (str && *str == '-')
		str++;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}

/**
 * check_if_push - checks if the opcode is a string and sets value
 * @tok_line: line of operation code
 * @lineno: line number
 *
 * Return: 1 if success and 0 if not pushed
 */
int check_if_push(char *tok_line[], int lineno)
{
	if (strcmp(tok_line[0], "push") == 0)
	{
		if (tok_line[1][0] != '\0' && check_if_number(tok_line[1]))
			value[0] = atoi(tok_line[1]);
		else
		{
			printf("L%d: usage: push integer\n", lineno);
			value[2] = 1;
			return (0);
		}

		return (1);
	}

	return (0);
}
