#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <stdbool.h>
#include <errno.h>

char *_readline(void);
char **split_str(char *line);
void _exec(char **args);
char *_read_line(void);

#endif
