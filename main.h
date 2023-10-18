#ifndef MAIN_H
#define MAIN_H

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdbool.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#define RANGE 1024
extern char **environ;


char *env_location(char *argcomm);
void command_handle(char *stringline);
char *_strdup(const char *str);
char **split_str(char *str, const char *delim);
char *_envpath(const char *str);
ssize_t _getline(char *buf, size_t size);
void commandfork(char **argstr);
void shell_exec(char **args);
char *cpystr(char *str, const char *source);
int cmpstr(const char *string, const char *string2);
char *catstr(char *str, char *source);
void execute_env(void);
char *my_getenv(const char *name);
void free_str(char **argstr);
int lenstr(const char *str);
int strncmp_made(const char *string1, const char *string2, size_t dm);

#endif
