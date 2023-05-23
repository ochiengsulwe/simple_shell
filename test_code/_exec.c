#include "main.h"
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
	char **envp;

	child = fork();
	if (child < 0)
	{
		dprintf(STDERR_FILENO, "An error has occurred");
		exit(EXIT_FAILURE);
	}
	else if (child == 0)
	{
		if (execve(args[0], args, envp) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		do {
			waitpid(child, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
}
