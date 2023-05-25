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
	pid_t child, ppid;
	int status;
	char **envp = NULL;

	child = fork();
	if (!child)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			perror("hsh");
			/*exit(EXIT_FAILURE);*/
		}
	}
	else
	{
		do {
			ppid = waitpid(child, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
}
