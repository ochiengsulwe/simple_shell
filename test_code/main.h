#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <readline/readline.h>
#include <readline/history.h>

#define MAXCOM 1000 /* max number of letters to be supported */
#define MAXLIST 100 /* max number of commands to be suported */
#define clear() printf("\033[H\033[J") /* clearing shell during startup*/

char *_readline(void);
char **split_str(char *line);

#endif
