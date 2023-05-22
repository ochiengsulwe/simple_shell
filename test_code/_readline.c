#include "main.h"
/**
 * _readline - prints ommands  unto the next line
 * Return: the charactors read on success
 *	-1 on failure
 */
char *_readline(void)
{
	char *line = NULL;
	size_t line_len = 0;

	if (getline(&line, &line_len, stdin) == -1)
	{
		if (feof(stdin))
		{
			exit(EXIT_SUCCESS);
		}
		else
		{
			dprintf(STDERR_FILENO, "Error: Couldn't read line: %s\n", line);
			exit(EXIT_FAILURE);
		}
	}
	return (line);
}
