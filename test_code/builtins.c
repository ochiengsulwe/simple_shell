#include "main.h"
#include "utils.h"

/**
 * _cd - changes cwd to the specified new_dir
 * @args: command line args passed to func
 * Return: nothing
 */
void _cd(char **args)
{
	if (args[1] == NULL)
		dprintf(STDERR_FILENO, "hsh: expected argument to \"cd\"\n");
	if (chdir(args[1]) != 0)
		perror("hsh");
}
/**
 * hsh_exit - exits the current shell
 * @args: args to function
 * Return: nothing
 */
void hsh_exit(char **args)
{
	exit(0);
}
