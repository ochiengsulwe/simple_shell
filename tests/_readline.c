#include "main.h"
/**
 * _read_line - reads characters from a file or stdin
 * Return: returns pointer to the buffer storing the read characters.
 */
char *_read_line(void)
{
	size_t buffersize = BUFSIZ;
	int index = 0;
	char *buffer = NULL;
	int _char;

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
			buffe[index] = c;
		}
		index++;
		if (index >= buffersize)
		{
			buffersize += BUFSIZ;
			buffer = realloc(buffer, buffersize);
			if (!buffer)
			{
				dprintf(STDERR_FILENO, "Error: reallocation error\n");
				exit(EXIT_FAILURE);
			}
		}
	}
}
