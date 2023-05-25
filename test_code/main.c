#include "main.h"
/**
 * main - program entry point
 * @argc: total number of arguments
 * @args: pointer to args passed to main
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char **args __attribute__((unused)))
{
	char **tokens = NULL;
	char *line = NULL;
	char *prompt = "$ \0";

	while (true)
	{
		if (isatty(STDIN_FILENO) == 1)
			write(STDOUT_FILENO, prompt, strlen(prompt));
		line = _readline();
		if (line == NULL)
		{
			free(line);
			free(tokens);
			exit(EXIT_SUCCESS);
		}
		tokens = split_str(line);
		if (tokens[0] != NULL)
			_exec(tokens);
	}
	free(line);
	free(tokens);
	return (0);
}
