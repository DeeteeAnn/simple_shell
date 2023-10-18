#include "main.h"

/**
  * main - this performs a program
  * Return: successful on 0
  */
int main(void)
{
	char stringline[150];
	ssize_t area;

	while (1)
	{

	write(STDIN_FILENO, "$ ", 3);

	area = _getline(stringline, sizeof(stringline));

	if (area != -1)
	{
		char *newline = strchr(stringline, '\n');

		if (newline != NULL)
		{
		*newline = '\0';
		}
	command_handle(stringline);
	}
	return (0);
}



/**
  * free_str - this frees space
  * @argstr: a value to pass
  */
void free_str(char **argstr)
{
	int em = 0;

	while (argstr[em] != NULL)
	{
		free(argstr[em]);
		em++;
	}
	free(argstr);
}

/**
  * commandfork - copies a process
  * @argstr: acquires a value
  */
void commandfork(char **argstr)
{
	pid_t num1 = fork();

	if (!(num1 != -1))
	{
		perror("Oops! this is a failed process");
		exit(1);
	}
	else if (!num1)
	{
		shell_exec(argstr);
		exit(0);
	}
	else
	{
		wait(NULL);
	}
}
