#include "main.h"
#include "utils.h"

int hsh_num_builtins()
{
	return (sizeof(builtin_str) / sizeof(char *));
}
int hsh_cd(char **args)
{
	if (args[1] == NULL)
	{
		dprintf(STDERR_FILENO, "hsh: expected argument to \"cd\"\n");
	}
	else
	{
		if (chdir(args[1]) != 0)
		{
			perror("hsh");
		}
	}
	return (1);
}
int hsh_help(char **args)
{
	int i;

	printf("Kendy & Sulwe's HSH\n");
	printf("Type programme names and arguments, and press enter.\n");
	printf("The following are built in: \n");

	for (i = 0; i < hsh_num_builtins(); i++)
	{
		printf(" %s\n", builtin_str[i]);
	}
	printf("Use the man command for information on other programmes.\n");
	return (1);
}
int hsh_exit(char **args)
{
	return (0)
}
