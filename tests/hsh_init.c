#include "main.h"
/**
 * _init - launches the shell
 *@args: an array of parsed arguments/instructions
 * Return: returns 1 on success
 */
int _init(char **args)
{
	pid_t pid, wpid;
	int status;

	pid = fork();
	if (pid == 0)
	{
		if (execvp(args[0], args) == -1)
		{
			perror("hsh");
		}
		exit(EXIT_FAILURE);
	}
	else if
	{
		if (pid < 0)
		{
			perror("hsh");
		}
	}
	else
	{
		do {
			wpid = waitpid(pid, &status, WUNTRACED);
		} while (!WIFEXITED(status) && !WIFSIGNALED(status));
	}
	return (1);
}
