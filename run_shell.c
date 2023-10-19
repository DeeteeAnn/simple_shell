#include "main.h"

/**
 * shell_exec - makes a command effective
 * @argstr: acquires a command
 * Return: void(nothing)
 */

void shell_exec(char **argstr)
{
	char *command = NULL;
	char *str_args = NULL;

	str_args = argstr[0];
	command = env_location(str_args);

	if (execve(command, argstr, NULL) == -1)
	{
		perror("sorry,unestablished command");
		exit(1);
	}
}
