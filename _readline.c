#include "main.h"
/**
 * _read_line - reads characters from a file or stdin
 * Return: returns pointer to the buffer storing the read characters.
 */
char *_read_line(void)
{
	size_t buffer_size = BUFSIZ;
	int index = 0;
	char *buffer = NULL;
	int c;

	buffer = malloc(sizeof(char) * buffer_size);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
		exit(EXIT_FAILURE);
	}
	while (true)
	{
		c = getchar();
		if (c == EOF || c == '\n')
		{
			buffer[index] = '\0';
			return (buffer);
		}
		else
		{
			buffer[index] = c;
		}
		index++;
		if (index >= buffer_size)
		{
			buffer_size += BUFSIZ;
			buffer = realloc(buffer, buffer_size);
			if (!buffer)
			{
				dprintf(STDERR_FILENO, "Error: reallocation error\n");
				exit(EXIT_FAILURE);
			}
		}
	}
}
