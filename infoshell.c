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
	if (lineargs[1])
	{
	status_exit = atoi(lineargs[1]);
	free_str(lineargs);
	exit(status_exit);
	}
	else
	{
	free_str(lineargs);
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
if (commmandpath == NULL)
{
	perror("Unavailable command");
	free_str(lineargs);
}
else
{
	commandfork(lineargs);
	free_str(lineargs);
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
		write(STDOUT_FILENO, *envn, lenstr(*envn));
		write(STDOUT_FILENO, "\n", 1);
	}
}
