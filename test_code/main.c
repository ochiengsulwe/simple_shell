#include "main.h"
/**
 * main - program entry point
 * Return: 0 on success
 */
int main(void)
{
	char **tokens = NULL;
	char *line = NULL;

	printf("$ ");
	line = _readline();
	tokens = split_str(line);
	while (*tokens != NULL)
	{
		printf("%s", *tokens);
		tokens++;
	}
	free(line);
	free(tokens);
	return (0);
}
