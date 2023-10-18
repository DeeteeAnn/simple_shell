#include "main.h"

/**
 * shell_exec - makes a command effective
 * @args: acquires a command
 * Return: void(nothing)
 */

void shell_exec(char **args)
{
	char *order = NULL;
	char *argstring = NULL;

	argstring = args[0];
	order = env_location(argstring);

	if (execve(order, arg, NULL) == -1)
	{
		perror("sorry,unestablished command");
		exit(1);
	}
}
