#include "main.h"
/**
 * _readline - reads characters from the stdin
 * Return: pointer to the beginning of the line read
 */
char *_readline(void)
{
	char *line = NULL;
	size_t len = 0;

	if (getline(&line, &len, stdin) == -1)
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
	return (line);
}
