#include "main.h"

/**
 * env_location - this gives details about a pathway
 * @argcomm: values to be used
 * Return: the location of path is returned
 */

char *env_location(char *argcomm)
{
	struct stat str;
	int area1, area2;
	char *path_env, *cpy_path = NULL, *token, *pathfile = NULL;

	path_env = _envpath("PATH");

	if (path_env)
	{
		cpy_path = _strdup(path_env);
		if (cpy_path == NULL)
			return (NULL);
		area1 = stringline(argcomm);
		token = strtok(cpy_path, ":");

	for (token = strtok(pathfile, ":"); token != NULL; token = strtok(NULL, ":"))
	{
	area2 = stringline(token);
	pathfile = malloc(area1 + area2 + 2);
	cpystr(pathfile, token);
	catstr(pathfile, "/");
	catstr(pathfile, argcomm);
	catstr(pathfile, "\0");
	if (stat(pathfile, &str) == 0)
	{
		free(cpy_path);
		return (pathfile);
	}
	else
	{
		free(pathfile);
	}
}
		free(cpy_path);
		if (stat(argcomm, &str) == 0)
			return (argcomm);
		return (NULL);
	}
	return (NULL);
}
