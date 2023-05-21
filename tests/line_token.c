#include "main.h"
/**
 * line_split - splits args into tokaens
 * @line: an array or argsto be parsed
 * Return: returns a pointer to the array pointers
 */
char **line_split(char *line)
{
	int buffsize = TOK_BUFSIZ, index = 0;
	char **tokens;
	char *token;

	tokens = malloc(sizeof(char) * buffsize);
	if (!tokens)
	{
		dprintf(STDERR_FILENO, "Error: memory allocation failed");
		exit(EXIT_FAILURE);
	}
	token = strtok(line, TOK_DELIM);
	while (token != NULL)
	{
		tokens[index] = token;
		index++;
		if (index >= buffsize)
		{
			buffsize += TOK_BUFSIZ;
			tokens = realloc(tokens, sizeof(char) * buffsize);
			if (!tokens)
			{
				dprintf(STDERR_FILENO, "Error: can't reallocate memory");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, TOK_DELIM);
	}
	tokens[index] = NULL;
	return (tokens);
}
