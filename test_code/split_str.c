#include "main.h"
/**
  * split_str - tokenizes string args passed by the user
  * @line: the string to be parsed
  * Return: pointer to the parsed strings on success
  *	NULL on failure
  */
char **split_str(char *line)
{
	char *delim = " \t\n";
	char *token = NULL;
	char **tokens = NULL;
	int count = 0, buff_size = 32;

	tokens = malloc(sizeof(char *) * buff_size);
	if (!tokens)
	{
		dprintf(STDERR_FILENO, "Error: Can't allocate memory");
		exit(EXIT_FAILURE);
	}
	token = strtok(line, delim);
	while (token != NULL)
	{
		tokens[count] = token;
		count++;
		if (count >= buff_size)
		{
			buff_size = buff_size + buff_size;
			tokens = realloc(tokens, sizeof(char *) * buff_size);
			if (!tokens)
			{
				dprintf(STDERR_FILENO, "Error: Can't reallocate memory");
				exit(EXIT_FAILURE);
			}
		}
		token = strtok(NULL, delim);
	}
	tokens[count] = NULL;
	return (tokens);
}
