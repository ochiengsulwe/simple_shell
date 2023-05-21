#include "main.h"
#include "utils.h"
/**
 * main - prints arguments to CLI
 * Return: 0 on success
 * @argc: counts the number of arguments passed
 * @av: array of arguments passed
 */
int main(int argc __attribute__((unused)), char **av)
{
	/**
	 * int i = 1;

	* while (av[i] != NULL)
	* {
	*	printf("%s\n", av[i]);
	*	i++;
	* }
	* read_line();
	* free(av);
	*/
	hsh_loop();
	return (0);
}
