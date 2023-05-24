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
	/**
	 * int i, num;
	 * builtin *ins = NULL;
	 *
	 * num = num_builtins();
	 * for (i = 0; i < num; i++)
	 * {
	 *	if (strcmp(args[0], ins[i].name) == 0)
	 *	{
	 *		ins[i].func(args);
	 *		return;
	 *	}
	 * }
	 */
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
			dprintf(STDERR_FILENO, "hsh: %s: is not a command\n", args[0]);
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
/**
 * num_builtins - calculates the total number of available builtins
 * Return: the total number of available builtins of hsh
 */
int num_builtins(void)
{
	int num;
	builtin ins[] = {
		{"cd", _cd},
		{"exit", hsh_exit},
	};

	num = sizeof(ins) / sizeof(struct builtin);
	return (num);
};
