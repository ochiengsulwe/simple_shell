#include "main.h"
/**
 * read_line - prompts a user to enter a command, prints it on the next line
 * Return: number of bytes read on success, or
 *	-1 on failure.
 */
void read_line(void)
{
	char *line = NULL;
	size_t *len = 0;
	ssize_t read;

	printf("$ ");
	read = getline(char **line, len, stdin);
	if (read == -1)
	{
		perror("Error: ");
		exit(EXIT_FAILURE);
	}
	dprintf(STDOUT_FILENO, "%s\n", line);
}
