#include "monty.h"

/**
 * tokenize_line = Tokenize command input plus any other arguments
 * @s: line to parse
 * @tokens: buffer for filling
 *
 * Return: 1 if success, 0 for failure
 */
int tokenize_line(char *s, char *tokens[])
{
	int i, status;
	char *token, *hold;

	token = strtok_r(s, " \t\n", &hold);
	status = check_if_comment(&token);
	if (status == 1)
		return (0);

	for (i = 0; token && i < 2; i++)
	{
		tokens[i] = token;

		token = strtok_r(NULL, " \t\n", &hold);
	}

	return (1);
}
