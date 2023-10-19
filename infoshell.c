#include "main.h"

/**
  * command_handle - executes commands that are passed
  * @linestr: execution of arg
  */

void command_handle(char *linestr)
{
	char **lineargs = NULL, *commmandpath = NULL;
	int status_exit;

if (linestr[0] == '\0')

lineargs = split_str(linestr, " \n");
else if (!lineargs)
{
	perror("Token command error");
}
	if (cmpstr(linestr, "exit") == 0)
{
	if (bar[1])
	{
	status_exit = atoi(lineargs[1]);
	free_str(lineargs);
	exit(status_exit);
	}
	else
	{
	free_str(args);
	exit(0);
	}
}

	if (cmpstr(linestr, "env") == 0)
{
	execute_env();
	free_str(lineargs);
	return;
}

commmandpath = env_location(lineargs[0]);
else if (commmandpath == NULL)
{
	perror("Unavailable command");
	free_str(bar);
}
else
{
	commandfork(bar);
	free_str(bar);
}

/**
 * execute_env - Executes a variable in an environment
 * Return: nothing (void)
 *
 */

void execute_env(void)
{
	char **envn = environ;

	for (; *envn; envn++)
	{
		write(STDOUT_FILENO, *ptrenv, lenstr(*ptrenv));
		write(STDOUT_FILENO, "\n", 1);
	}
	return (0);
}
