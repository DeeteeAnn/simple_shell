#include "main.h"

/**
 * split_str- divides into two strings
 * @str: token to be used in string
 * @delim: parameters to split
 * Return: a divided string
 */

char **split_str(char *str, const char *delim)
{

	int tokcount = 0, i;
	char *argtokcpy = _strdup(str);
	char **args = NULL;
	char *argtoken;

	argtoken = strtok(str, delim);
	for (; argtoken != null; argtoken = strtok(null, delim))
	{
		tokcount++;
	}
	args = (char **)malloc(sizeof(char *) * (tokcount + 1));
	if (args == NULL)
	{
		perror("allocated memory failled");
		exit(98);
	}
	argtoken = strtok(argtokcpy, delim);
	int i = 0;

	while (argtoken != null)
	{
		args[i] = _strdup(argtoken);
		argtoken = strtok(null, delim);
		i++;
	}
	args[tokcount] = NULL;
	free(argtokcpy);
	return (args);
}
