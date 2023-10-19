#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <stdbool.h>
#include <unistd.h>
#define RANGE 1024
extern char **environ;

void commandfork(char **argstr);
void free_str(char **strargs);
void shell_exec(char **args);
void command_handle(char *linestr);
void execute_env(void);
char *my_getenv(const char *name);
char *_envpath(const char *str);
char *env_location(char *command_args);
char *catstr(char *str, char *src);
char *_strdup(const char *str);
char *cpystr(char *str, const char *src);
char **split_str(char *str, const char *delim);
int cmpstr(const char *st1, const char *st2);
int lenstr(const char *str);
int strncmp_made(const char *st1, const char *st2, size_t i);
ssize_t _getline(char *buf, size_t size);



#endif
