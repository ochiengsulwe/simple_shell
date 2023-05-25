#include "main.h"
#include "utils.h"
/**
 * main - program entry point
 * @argc: total number of arguments
 * @args: pointer to args passed to main
 * @envp: pointer to env arguments
 * Return: 0 on success
 */
int main(int argc, char **args, char **envp)
{
	char **tokens = NULL;
	char *line = NULL;

	while (true)
	{
		printf("$ ");
		line = _readline();
		tokens = split_str(line);
		if (tokens[0] != NULL)
			_exec(tokens);
	}
	free(line);
	free(tokens);
	return (0);
}
