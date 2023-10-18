#include "main.h"

/**
  * command_handle - executes commands that are passed
  * @stringline: execution of arg
  */

void command_handle(char *stringline)
	{
	char **bar = NULL, *commmandpath = NULL;
	int status_exit;

	if (stringline[0] == '\0')
	{
		return;
	}
	bar = split_str(stringline, " \n");
	else if (!bar)
	{
		perror("Token command error");
		return;
	}
	else if (cmpstr(stringline, "exit") == 0)
	{
		if (bar[1])
		{
			status_exit = atoi(bar[1]);
			free_str(bar);
			exit(status_exit);
		}
		else
		{
			free_str(bar);
			exit(0);
		}
	}
	else if (cmpstr(stringline, "env") == 0)
	{
		execute_env();
		free_str(bar);
		return;
	}
	commmandpath = env_location(bar[0]);
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
	char **ptrenv = environ;

	for (; *ptrenv; ptrenv++)
	{
		write(STDOUT_FILENO, *ptrenv, lenstr(*ptrenv));
		write(STDOUT_FILENO, "\n", 1);
	}
}
