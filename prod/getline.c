#include "main.h"
/**
 * command_in - receives commands from the user
 * Desription: this is to work the shell interactive mode
 * Return: a pointer t the first command passed.
 */
char *command_in(void)
{
	char *command_args = NULL;
	size_t len = 0;
	ssize_t _strlen;

	if (getline(&command_args, &len, stdin) != -1)
	{
		/* check if command has a \n and replace it with \0*/
		_strlen = strlen(command_args);
		if (command_args[_strlen - 1] == '\n')
			command_args[_strlen - 1] = '\0';
	}
	else
	{
		if (feof(stdin))
		{
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("getline");
			exit(EXIT_FAILURE);
		}
	}
	return (command_args);
}
