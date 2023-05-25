#include "main.h"
#include "utils.h"
/**
 * _exec - loads new program disc to parent program
 * @args: arguments to be received from tokenization
 * Return: on success never returns,
 *	-1 on error.
 */
void _exec(char **args)
{
	pid_t child;
	int status;
	char **envp = NULL;

	child = fork();
	if (child == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	if (child == 0)
	{
		if (args[1] != NULL)
		{
			dprintf(STDERR_FILENO, "./shell: No such file or directory\n");
			exit(EXIT_FAILURE);
		}
		if (execve(args[0], args, envp) == -1)
		{
			perror("./shell");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		do {
			if (waitpid(child, &status, WUNTRACED) == -1)
			{
				perror("waitpid");
				exit(EXIT_FAILURE);
			}
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
}
