#include "main.h"

/**
  * main - this performs a program
  * Return: successful on 0
  */

int main(void)
{
	char linestr[150];
	ssize_t len;

	while (1)
	{

	write(STDIN_FILENO, "$ ", 3);

	len = _getline(linestr, sizeof(linestr));

	if (area == -1)
	{
		char *newline = strchr(linestr, '\n');

		if (newline != NULL)
		{
		*newline = '\0';
		}
	command_handle(linestr);
	}
	return (0);
}



/**
  * free_str - this frees space
  * @strargs: a value to pass
  */

void free_str(char **strargs)
{
	int j = 0;

	while (strargs[j] != NULL)
	{
		free(strarg[j]);
		j++;
	}
	free(strargs);
}
/**
  * commandfork - copies a process
  * @strargs: acquires a value
  */


void commandfork(char **strargs)
{
	pid_t first = fork();

	if (!(first != -1))
	{
		perror("Oops! this is a failed process");
		exit(1);
	}
	else if (!first)
	{
		shell_exec(argstr);
		exit(0);
	}
	else
	{
		wait(NULL);
	}

}
