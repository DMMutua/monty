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
 * @tok_line: line of opcode
 * @lineno: line number
 * Return: 1 if success and 0 if not pushed
 */
int check_if_push(char *tok_line[], int lineno)
