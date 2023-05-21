#ifndef UTIL_H
#define UTIL_H

/* Function prototypes for builtin shell commands */
int hsh_cd(char **args);
int hsh_help(char **args);
int hsh_exit(char **args);

char *builtin_str[] = { "cd", "help", "exit"};
int (*builtin_func[])(char **) = {&hsh_cd, &hsh_help, &hsh_exit};

#endif
