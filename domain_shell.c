#include "main.h"

/**
 * env_location - this gives details about a pathway
 * @command_args: values to be used
 * Return: the location of path is returned
 */

char *env_location(char *command_args)
{
	struct stat str;
	int len1, len2;
	char *envpath, *token, *copypath = NULL, *filepath = NULL;

	envpath = _envpath("PATH");
	if (envpath)
	{
		copypath = _strdup(envpath);
		if (copypath == NULL)
			return (NULL);
		len1 = lenstr(command_args);
		token = strtok(copypath, ":");
	for (token = strtok(path, ":"); token != NULL; token = strtok(NULL, ":"))
{
	area2 = lenstr(token);
	filepath = malloc(len1 + len2 + 2);
	cpystr(filepath, token);
	catstr(filepath, "/");
	catstr(filepath, command_args);
	catstr(filepath, "\0");
	if (stat(filepath, &str) == 0)
	{
		free(copypath);
		return (filepath);
	}
	else
	{
		free(filepath);
	}
}
		free(copypath);
		if (stat(command_args, &str) == 0)
			return (command_args);
		return (NULL);
	}
	return (NULL);
}
