#ifndef UTILS_H
#define UTILS_H

void _cd(char **args);
void hsh_exit(char **args);
int num_builtins(void);

/**
 * struct builtin - a list of hsh builtins
 * @name: the name of the builtin
 * @func():pointer to the function of name to execute
 */
typedef struct builtin {
	char *name;
	void (*func)(char **args);
} builtin;


#endif
