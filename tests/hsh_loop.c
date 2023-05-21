#include "main.h"
#include "utils.h"

void hsh_loop(void)
{
	char *line;
	char **args;
	int status;

	do {
		printf("$ ");
		line = _read_line();
		args = line_split(line);
		status = hsh_execute(args);

		free(line);
		free(args);
	} while (status);
}
